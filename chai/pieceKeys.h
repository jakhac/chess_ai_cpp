#pragma once

#include "types.h"

/**
 * 64-Bit keys for each piece on each square. First entry contains EnPassant keys.
 */
const key_t pieceKeys[13][64] = {
	{ // En passant key
		0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0,
		(key_t)0x248e1b47a3f81112ll, (key_t)0x16d71627f644f459ll,(key_t)0x200d8e8c1b5f107ell, (key_t)0x2d358efca3409e6fll,
		(key_t)0xc9b907fb48109af7ll, (key_t)0xb0718e6f02b6b57dll, (key_t)0x4405d63bfc4cdbf0ll, (key_t)0xfdfe521d0fef1062ll,
		0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0,
		(key_t)0x2802e7d8c4e3882bll, (key_t)0xf8d653a4b549be62ll, (key_t)0xd37373bf5ba34c25ll, (key_t)0x1509a7b9289b9f59ll,
		(key_t)0x711dd72c0cfd0ab3ll, (key_t)0x552ee2076f65e36fll, (key_t)0x6c2be91e192b6282ll, (key_t)0xf070efc86107f19cll,
		0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0
	},
	{ // Piece::P
		(key_t)0xb51754f5e711b813ll, (key_t)0x705f2cd31a63ba65ll, (key_t)0xb7373b22c18db0b0ll, (key_t)0x19ad99d9034a33a1ll,
		(key_t)0x4f5fc9f5c1241237ll, (key_t)0xdc635b744d5d4951ll, (key_t)0xdc0d1247c047e9fall, (key_t)0xeac4c9deac4cd551ll,
		(key_t)0x1807138ee8a95b1cll, (key_t)0x1f4154e5bd1f4cd0ll, (key_t)0x5a7cee465f0d161cll, (key_t)0xefa62607615ec9b1ll,
		(key_t)0x944f6d7ff2bbd230ll, (key_t)0x07b9acb9a025753ell, (key_t)0x782491c5c3739811ll, (key_t)0xeac501dfe1b45cfall,
		(key_t)0x0649c660fc3087e8ll, (key_t)0x6747731eeb43eb32ll, (key_t)0x8beaf5728fd5f645ll, (key_t)0x663664da83e08c7fll,
		(key_t)0x6c9afd000fac6d31ll, (key_t)0x17d80e75ae0859dcll, (key_t)0xb00dbe1f1aa85c81ll, (key_t)0xe065bd58dd58cbe3ll,
		(key_t)0x153fb4d8e1e3d4e7ll, (key_t)0x06cdf6beac7ffd3all, (key_t)0x673fca910661e1f3ll, (key_t)0x5785a9d846dd4425ll,
		(key_t)0xdd337d3dd1b416d0ll, (key_t)0xc7d995b312ae9f61ll, (key_t)0x00a69cb7b61ef4dell, (key_t)0x320a753e9c694da5ll,
		(key_t)0x072e0fc4df4b9b4bll, (key_t)0xd748197b493bac55ll, (key_t)0x49d73350a93ff975ll, (key_t)0x7f4b0e360dcde62all,
		(key_t)0xe6474fa6e49e0b0dll, (key_t)0x3be73cf2f97af344ll, (key_t)0xa05d015f8f8ee8eall, (key_t)0xd00ec007604a35c9ll,
		(key_t)0xbc577bffbf8678c1ll, (key_t)0x10ca9b0098ae472bll, (key_t)0xea2aaa7d394e7b8bll, (key_t)0x9e038e667c117149ll,
		(key_t)0x22423e7a1bb1e891ll, (key_t)0x5c5ad5d8e6690fbbll, (key_t)0x4fd1312852176e3dll, (key_t)0x163590f924694c45ll,
		(key_t)0x1b718af8ec3957f8ll, (key_t)0x4526ee0e550cda54ll, (key_t)0x2f8f04251c60c588ll, (key_t)0x91e3576d7ce7e209ll,
		(key_t)0x4feeaa10cd259da7ll, (key_t)0x1546764e0da9d9c0ll, (key_t)0x0d59cb26bfd34b66ll, (key_t)0x9b227fa5537038aell,
		(key_t)0xb86ed0b807d1c599ll, (key_t)0x8405b80260b83eadll, (key_t)0x7bddc61ea5e0c234ll, (key_t)0x977d2e3006a0c457ll,
		(key_t)0x6a2eced34a470e28ll, (key_t)0x3be805de97b8eeafll, (key_t)0xe565b50b55aa3d31ll, (key_t)0x31e349d0da0c99ccll,
	},
	{ // Piece::N
		(key_t)0x7b43aaff9ddb690ell, (key_t)0xeaddfffcd4b971b5ll, (key_t)0xc961002b47f505e0ll, (key_t)0x190c662bcaf458efll,
		(key_t)0xa5faa776c959fac7ll, (key_t)0xe99aaf26fe315da2ll, (key_t)0x0320f7fc0058a09ell, (key_t)0x043dfe81705bcb69ll,
		(key_t)0x209add9173f50d77ll, (key_t)0x17d1f4526c92bfc5ll, (key_t)0xf2c3786cf540b945ll, (key_t)0x42de8a8f192532d6ll,
		(key_t)0xa9a92ef389ec1472ll, (key_t)0xc5255d6ca38d7307ll, (key_t)0xa43e469b2992fe93ll, (key_t)0x443ad23046164abell,
		(key_t)0x5fbda8a22d438d09ll, (key_t)0xe84adf17de664bdfll, (key_t)0xbc2443edeab7660fll, (key_t)0x340f17cbfce40529ll,
		(key_t)0x876fdcb745c6f8d2ll, (key_t)0x773a5c96f11a34b0ll, (key_t)0xbeb63b91b17eb2e2ll, (key_t)0x2cb345b0d81a46ebll,
		(key_t)0xf6dce38fa4c5ef22ll, (key_t)0x8b7fc463932481b1ll, (key_t)0x2ab18d2737d4ae13ll, (key_t)0xb3ffe80d38595ee6ll,
		(key_t)0x1fb98701d4e1effdll, (key_t)0x8d28dec8fc8cc959ll, (key_t)0x1d14dac3087de6e1ll, (key_t)0x22aedb998efc6a8dll,
		(key_t)0x19a05bb44d81f9eall, (key_t)0x7c0e55d9646d7725ll, (key_t)0x637303bc78b52348ll, (key_t)0x1af01e80f4fca1a2ll,
		(key_t)0x986295657c838721ll, (key_t)0xe96bc817f6663350ll, (key_t)0x556d376af331a949ll, (key_t)0xc578f3d88665b987ll,
		(key_t)0xf101ad606492a303ll, (key_t)0x586e0d41545da687ll, (key_t)0xd01f615dc40fad85ll, (key_t)0x68c0ecc87a1b76cfll,
		(key_t)0x554ef544de289a3ell, (key_t)0x5aae49a670aa0e62ll, (key_t)0x9b62cbdc5bda8903ll, (key_t)0xc099691525df54e0ll,
		(key_t)0x173b47d8b8973b67ll, (key_t)0xd0e0f09a0dc39f59ll, (key_t)0x76da52839778c96ell, (key_t)0x0a93e674c378321dll,
		(key_t)0x703dcc0a1423e4ball, (key_t)0xfb83e3a802586ffdll, (key_t)0xe0cf01bbfe3cdda2ll, (key_t)0xfd6cfd4150ffde32ll,
		(key_t)0x92912474474592efll, (key_t)0xa54df6effc7f618fll, (key_t)0x69458d3d6c064c8fll, (key_t)0xa6860597be587b17ll,
		(key_t)0xa1991839303e86eall, (key_t)0x0362721dc41b944fll, (key_t)0xed22c1102bfe3972ll, (key_t)0xf1668f9a6ecc1a56ll,
	},
	{
		(key_t)0x01ff2ae788c4aa4all, (key_t)0x58918ed1683587cell, (key_t)0xb963e68e5ec8066bll, (key_t)0x939e9349913b71d8ll,
		(key_t)0x878e24cec71840d9ll, (key_t)0x6f875204b9860013ll, (key_t)0x765eb82454ba8fcbll, (key_t)0x916977624d48ef53ll,
		(key_t)0x1ae48a13492302e2ll, (key_t)0x91ba28b31c978d5fll, (key_t)0xf8db3c858f1b18c8ll, (key_t)0xc346b9a6a968c313ll,
		(key_t)0x0111b90652a9959bll, (key_t)0xf312f511d66064f4ll, (key_t)0xfebfe5e9130b4dc2ll, (key_t)0xd57f5f3e9c8954d8ll,
		(key_t)0x2ec0cad4b6e22f61ll, (key_t)0xb4c493a7d4558367ll, (key_t)0xc2cdacec2001052all, (key_t)0xb74508812234c80bll,
		(key_t)0x415b51e9baa60646ll, (key_t)0x14a7df80914140fdll, (key_t)0xfb9ae7c073d68c48ll, (key_t)0xa74989ccc2a723a4ll,
		(key_t)0x12383a4f5e6b0cafll, (key_t)0x8c717fa6cb45d31cll, (key_t)0xd5cd85212b884d06ll, (key_t)0x023d853511d74900ll,
		(key_t)0x575c6dfc91d53792ll, (key_t)0xa56966531fb58c9dll, (key_t)0x3031fb6195330fb9ll, (key_t)0x1e42cd0af470de3all,
		(key_t)0xd471b4cdbfda41a3ll, (key_t)0x18896c8d3477a095ll, (key_t)0x3d75e3a5516f59a1ll, (key_t)0x6cad71013f292679ll,
		(key_t)0xa44a85f28d42149fll, (key_t)0xc2958277b7d9b240ll, (key_t)0xc7afec22b8865a8dll, (key_t)0x2e7ecc34161a2cb4ll,
		(key_t)0xc6ce5d7783eacb64ll, (key_t)0x09089d2aa474a873ll, (key_t)0xb72dbf9a490e1af6ll, (key_t)0xc3ec7b47b0cd8338ll,
		(key_t)0x8a9ad36a00b9fad7ll, (key_t)0x4528e415361ecef4ll, (key_t)0x0ab41259545f306dll, (key_t)0xf4146163d864efd7ll,
		(key_t)0xc8df293a1947f1a0ll, (key_t)0x8fd2485cfb2659e6ll, (key_t)0xee25ef3b7951ccddll, (key_t)0x22682b71e2ba323fll,
		(key_t)0x13fa7f00be5ee49all, (key_t)0xbbbd1b05baba5a42ll, (key_t)0xbdf3bfbffeeb5a86ll, (key_t)0x72c07f41a73e2c69ll,
		(key_t)0x8e1b03e791366de2ll, (key_t)0x659a8dc2d6a06140ll, (key_t)0xa0a94bdac8ff8fbbll, (key_t)0xfbeca0c6cb0754a8ll,
		(key_t)0xb1731f9bd72720c6ll, (key_t)0x7228f77d45dc4e26ll, (key_t)0xc5464b22e774ba54ll, (key_t)0x3152085e3e764d52ll,
	},
	{
		(key_t)0xb09e2f5a5821e43bll, (key_t)0x31696d971a9131e1ll, (key_t)0x0af99aedcf2ccb5all, (key_t)0x8bfa635b8213ef63ll,
		(key_t)0x5cbef65afe8d11f7ll, (key_t)0xfbf2f29f2abeddd4ll, (key_t)0xf0fd2d59c657c91dll, (key_t)0xeaeacb5d5001eb0all,
		(key_t)0xd93b6b0c7aa02d38ll, (key_t)0xf3952b2d5bd1ff91ll, (key_t)0xf3d876d94a99f903ll, (key_t)0x56f0e75d2d940952ll,
		(key_t)0x7e018b8df57444cbll, (key_t)0xb48f554f22a6a5b7ll, (key_t)0x2858b0fcd8bf2ccall, (key_t)0x94ae6e0397210c6bll,
		(key_t)0xf053a7696989f3fdll, (key_t)0xf57c90cf8432ff54ll, (key_t)0xba3d54cbf5aaa081ll, (key_t)0xcc5101e3aa0fc632ll,
		(key_t)0xcad0761fe08d7490ll, (key_t)0x36272845bcb07e47ll, (key_t)0x330c6d8ac17009e0ll, (key_t)0x5735daa3beebc224ll,
		(key_t)0x82198295a148dd36ll, (key_t)0xa6d98a8a4ad865d0ll, (key_t)0x4294e7f01cf8ce79ll, (key_t)0xfa987bc734704d5ell,
		(key_t)0xce41d03371870934ll, (key_t)0x05f9e81b1dc49828ll, (key_t)0x1b0a6ca223a6040all, (key_t)0x1536ef57222e8644ll,
		(key_t)0x252b5c80ba26b903ll, (key_t)0xcf07d8b317e1ed4all, (key_t)0x4779969a62b1ae95ll, (key_t)0x5219e31f7325ea26ll,
		(key_t)0x8a1e019dc303b09ell, (key_t)0x2be567e9cc603964ll, (key_t)0x108e586277a5797cll, (key_t)0xa4c8ce491e6c26e8ll,
		(key_t)0x3e37d6d46ef62e53ll, (key_t)0x36266db373f87a32ll, (key_t)0x8114c357a4bec5bfll, (key_t)0x02fcb7250592d7a7ll,
		(key_t)0xa3f5ac5120f78ee9ll, (key_t)0x9c07f019899f3417ll, (key_t)0x7fca1586a8724f19ll, (key_t)0xc7e11c5f17a4eb0fll,
		(key_t)0x8b86dfd0f0b6bf2fll, (key_t)0xa1e500843293f654ll, (key_t)0x8bfd9c76abbcd24bll, (key_t)0xe07c3c8bdd7c777ell,
		(key_t)0xc2d86aa2ee5989a1ll, (key_t)0xcde8f01511c89d08ll, (key_t)0xb435046c88afc298ll, (key_t)0x25c0435c6d7b5176ll,
		(key_t)0x94d1594607e35db2ll, (key_t)0xa72462ac38bf52dbll, (key_t)0xf050eae4082fba5ell, (key_t)0x62ed2afa859e0086ll,
		(key_t)0xfaf3a6d619a4952dll, (key_t)0xaeae74139ce80bebll, (key_t)0xccdec1589c3a7124ll, (key_t)0xdfdc1e3a2956bf97ll,
	},
	{ // Piece::Q
		(key_t)0x7609df8223114ae0ll, (key_t)0xd8ce5ed2dc170c46ll, (key_t)0x2c4221eba938e58all, (key_t)0x5af23a983a3f2011ll,
		(key_t)0x7834abf6ecf29e8cll, (key_t)0xe1c6b5f484f0ee91ll, (key_t)0xd7fadde000fc118dll, (key_t)0x2c5935bb83759af3ll,
		(key_t)0x8edb9df6308d4851ll, (key_t)0xc58e79df6bf28531ll, (key_t)0x5821bb31c8306706ll, (key_t)0x17350a07dc699a42ll,
		(key_t)0xa2c5c5380989f348ll, (key_t)0x0014eec56ae24307ll, (key_t)0xb017f0f11ba0b7a8ll, (key_t)0xf38cb7a6765a3bddll,
		(key_t)0x0ff952025f8088cfll, (key_t)0x64bdfa6f1fa0df3all, (key_t)0xace305fb3e2a3a05ll, (key_t)0x95c9ea7697251b77ll,
		(key_t)0x94a4a72b84bd4e46ll, (key_t)0x95697e9f9bc293b1ll, (key_t)0xef307b77418930bbll, (key_t)0xd500ff7733a400f0ll,
		(key_t)0xbf0e3c8b118f01dall, (key_t)0xb8563588dac95ad0ll, (key_t)0xb8fc0a931314a04ell, (key_t)0xc914e9a7133b03call,
		(key_t)0x303b482c8ffdac4all, (key_t)0xdebb1f7027ad7796ll, (key_t)0x79a64078f7c92fadll, (key_t)0x40f24f6a5c2e60eall,
		(key_t)0x791f8568935c5da3ll, (key_t)0x16b9184e0f036f5ell, (key_t)0x323dcf0010482b83ll, (key_t)0xe862c2700d93cd29ll,
		(key_t)0x8077e8d0a67bb347ll, (key_t)0xc247ab40b8bbae14ll, (key_t)0xb24898508cc3bd72ll, (key_t)0x7346a65e6f8fc0ccll,
		(key_t)0x5e9f16c9b38951a7ll, (key_t)0x4476129bb9fc15b2ll, (key_t)0x555e0aa4098ea924ll, (key_t)0x28860cd8c9a0554cll,
		(key_t)0x00d17c3433075103ll, (key_t)0x702491b1fcbd4f8all, (key_t)0x51ce64d92b7e1f2bll, (key_t)0x67c517502843427cll,
		(key_t)0xea90394f131f4827ll, (key_t)0xcedc0505d1ebb290ll, (key_t)0x0bef9015c90acd90ll, (key_t)0x907cb9a00a81f2b6ll,
		(key_t)0x4dda73f078f711e6ll, (key_t)0x18fc0326dda03fdell, (key_t)0x4d34a143a3de4be4ll, (key_t)0x855585b704d8c088ll,
		(key_t)0x8f9a4e4597747d58ll, (key_t)0x5bbf2adbda49f967ll, (key_t)0x072ae6f34b15a654ll, (key_t)0x2ea887b6d68d9a1dll,
		(key_t)0xee46dc8bbe5a7241ll, (key_t)0xcb699c6e37065a6ell, (key_t)0x6885d782e584417all, (key_t)0xf0f2fe83d2b24541ll,
	},
	{
		(key_t)0x52b6f353b903a1b2ll, (key_t)0xe053e5bc4e73e0cdll, (key_t)0x3a623228bb54f432ll, (key_t)0x8f54ecfeb981e912ll,
		(key_t)0x80306f286ef28a20ll, (key_t)0x8c5a0cfc8bd950bbll, (key_t)0x05b788f83206ed7all, (key_t)0x831f46270a64fca9ll,
		(key_t)0x6a734652b1654790ll, (key_t)0xb382510f366ca44cll, (key_t)0xd5ae46d7e105d016ll, (key_t)0xc66b117fa820a7cell,
		(key_t)0x5e48dd38521614e5ll, (key_t)0x342161e5506a3bb7ll, (key_t)0xee992b2688f379b9ll, (key_t)0x2a7fe6dc2e50fcffll,
		(key_t)0xcd80cc0cbe795f42ll, (key_t)0xb3b06071ac41c2f5ll, (key_t)0x3e7e50e0eff322d2ll, (key_t)0x43e33603f4662325ll,
		(key_t)0x924e8eb4a3cc3c08ll, (key_t)0x43a0db621b9a4e33ll, (key_t)0xe3aaa0589e4f1b5dll, (key_t)0x1c2bb5e910ca7eb4ll,
		(key_t)0x908e92ba8346d9bell, (key_t)0x700fc6bd654539dall, (key_t)0x8a95b256a33ab906ll, (key_t)0x9532c56cf9f24bb5ll,
		(key_t)0x5839eb0b01df0e28ll, (key_t)0x1dd1f3ba84d9613ell, (key_t)0x1492863429b1a676ll, (key_t)0xd95462087d0187c1ll,
		(key_t)0x4629171ffa621026ll, (key_t)0xa06bb67c265ea11dll, (key_t)0x9ab5eb43593f93c1ll, (key_t)0x58986ab05b2c8bb7ll,
		(key_t)0x724b2e48d1986015ll, (key_t)0xf050cf65e205c6fbll, (key_t)0x8cf400566ddf4fa2ll, (key_t)0x6ab954bb6aa6fcdall,
		(key_t)0xb9dc453ff1b07823ll, (key_t)0x73925487b9e5a468ll, (key_t)0x5bd70ff78350b77bll, (key_t)0x6872f470f06deedell,
		(key_t)0x7dee49d9048b6f2cll, (key_t)0xc100d474f7615d8all, (key_t)0xdca132a51fbc0da1ll, (key_t)0xa4160f6d8e33a672ll,
		(key_t)0x10f38960fba4bb65ll, (key_t)0x876a8799d0fd020bll, (key_t)0x91da42f4ba1b9a50ll, (key_t)0x321208f8c3e1642fll,
		(key_t)0x0fb54e35760d7d35ll, (key_t)0xcac109ced0e0536all, (key_t)0x02f185e18a9f65f6ll, (key_t)0x4a8dfb69f3aa2723ll,
		(key_t)0x448fbbad375fa11fll, (key_t)0x685d06b4fc3724b4ll, (key_t)0xc76adae69d1047ccll, (key_t)0x88de9c53587efc22ll,
		(key_t)0xb9829b624b5807bcll, (key_t)0xf8202bc71960dd4bll, (key_t)0x46b590c36f496b55ll, (key_t)0xfb22f108048ffaccll,
	},
	{ // Piece::p
		(key_t)0xc02a690f80253a1fll, (key_t)0x169b69dd2935ccdfll, (key_t)0x731de4a2147ca743ll, (key_t)0x4f5754882913a28bll,
		(key_t)0xe2c4367aad587b00ll, (key_t)0xecc8d17e6a1cca4fll, (key_t)0x12a10c7ac08147fall, (key_t)0xcb07c6dd21d5e628ll,
		(key_t)0x0c9cd4924f84ca14ll, (key_t)0x5e4c3429e33f24f5ll, (key_t)0xe43eba673be3a801ll, (key_t)0xb8bd5b45d8f8b524ll,
		(key_t)0xcb25aa53cb1d9d89ll, (key_t)0x344133ef2ded4847ll, (key_t)0x52c5d91a4e4db903ll, (key_t)0x08115d4f03f63df0ll,
		(key_t)0x22c7dd275fc896fall, (key_t)0x719065391d071f6bll, (key_t)0xabe77bfe948ae63bll, (key_t)0x4b03ea2620a01210ll,
		(key_t)0xa523fafb47bcf7c6ll, (key_t)0xa7a9801aacbeeca1ll, (key_t)0xf4086824e6e48771ll, (key_t)0x1d9bef45d2b7db81ll,
		(key_t)0xe641721780af8b49ll, (key_t)0x16ee640b56acc175ll, (key_t)0xebc8a0455b011458ll, (key_t)0xc48d41e06ed220b9ll,
		(key_t)0xf47d7a185d9ad9f9ll, (key_t)0x7f396fce357bcc06ll, (key_t)0xbc96f965c0d9fd4dll, (key_t)0xaae093924d6ee361ll,
		(key_t)0x54cc7414b43c7a83ll, (key_t)0x6971eff8bc43d2d6ll, (key_t)0xa5c38a5369b86ba0ll, (key_t)0xfa643c172cadcc0ell,
		(key_t)0x1d09c34a88a0f151ll, (key_t)0xff5cd6e569d04d70ll, (key_t)0x789d03464df6d63dll, (key_t)0x3db8ecd392743218ll,
		(key_t)0x94559c277b65f0eall, (key_t)0xe81cc8a42de7f949ll, (key_t)0x3959d9c262ed37aell, (key_t)0x8b0a29df548aee10ll,
		(key_t)0x535fe956174ce222ll, (key_t)0x097437df890cecd4ll, (key_t)0x23fad8364b3c0cbfll, (key_t)0xe6457f31456ebdd9ll,
		(key_t)0x4cd432786dcc8e5bll, (key_t)0x04b42ec1e4a29929ll, (key_t)0xd77e252341480328ll, (key_t)0xfff833e6536c50cdll,
		(key_t)0x455742c9a6c31bf0ll, (key_t)0x02abb0759c80d461ll, (key_t)0x2d33171fe9b6c9efll, (key_t)0x6b01e4767669f00all,
		(key_t)0xd18d782ccacf5020ll, (key_t)0x3ea3baf093927c88ll, (key_t)0x8fbac1c27e0b8573ll, (key_t)0x6283ab754867df3all,
		(key_t)0x035b6087a584217fll, (key_t)0x4eba409830340df7ll, (key_t)0xd95fb74ce31e64ffll, (key_t)0x057ba5fa5e26bc95ll,
	},
	{
		(key_t)0x830d0eda009a2a02ll, (key_t)0x1762fe478d9684d9ll, (key_t)0xafa85278d07394b3ll, (key_t)0x6448215aa30b2ed5ll,
		(key_t)0xda0c563c6b62d8c0ll, (key_t)0x0cd0b9f78f7da012ll, (key_t)0x674c3ce113029773ll, (key_t)0xce256b68646c6d52ll,
		(key_t)0x300df0a8b0813141ll, (key_t)0x531b7cb0d408ad3dll, (key_t)0xcb93d0d7a636e0d2ll, (key_t)0xcb8986e36752b171ll,
		(key_t)0xd31d7df1e464e964ll, (key_t)0x14f41eab2c90067bll, (key_t)0x442e8f03ed87cf69ll, (key_t)0xbd8452e6b23375f5ll,
		(key_t)0x498c8beaf79d3e2ell, (key_t)0xd62dd9e5c53c2e3all, (key_t)0xfd109e4169b6ff1fll, (key_t)0x78adb812c4ce3d41ll,
		(key_t)0x0223807c12b16ab7ll, (key_t)0x424fc11ea1ed4d1ell, (key_t)0x3431040c1320633dll, (key_t)0x8cdb301676577f1fll,
		(key_t)0x8922a1be141122cfll, (key_t)0xa398ad188cff5742ll, (key_t)0x5c7e5c64a201083fll, (key_t)0xa788aea3b2ff8e84ll,
		(key_t)0xdc873fe026f3df70ll, (key_t)0xb04189c70d343e02ll, (key_t)0x6efeb3aed8702c74ll, (key_t)0x293de74d53fac358ll,
		(key_t)0x1811c94cb42fc99ell, (key_t)0xdcff7ebf3ec6aaccll, (key_t)0x331b55192b24311dll, (key_t)0xc97e66678b8998cfll,
		(key_t)0x44c69192dd7ce905ll, (key_t)0x199d9a80ef45963all, (key_t)0x90715fde120fdd07ll, (key_t)0xb906813dad9297b6ll,
		(key_t)0x4b3f276f8d594201ll, (key_t)0x0a6f964c8e469a8fll, (key_t)0xa278b81b6296987all, (key_t)0x625bd76ec0e74e33ll,
		(key_t)0xdf0b86c519e78f21ll, (key_t)0xfc1d0305d7248d23ll, (key_t)0xe52706f48fe38ec6ll, (key_t)0x8591446dffbfc3b8ll,
		(key_t)0xfabef676a5e150a3ll, (key_t)0x9c681bc808c54385ll, (key_t)0xf65e4d0a40cdcb5fll, (key_t)0x20a19087b3d2c9fbll,
		(key_t)0xa7a1b5baeb8380cfll, (key_t)0x5f6c31b5b83ef474ll, (key_t)0xc47db5845f3e2a4fll, (key_t)0x174930f49ee486dcll,
		(key_t)0x4c6a6450da15f676ll, (key_t)0x7013cdf26c01e115ll, (key_t)0x5893629011979b04ll, (key_t)0x777a6a9e47534a0fll,
		(key_t)0x3a3dff15f039c2dcll, (key_t)0xcbdc73d9f685a141ll, (key_t)0x0d2ba509097ac8dbll, (key_t)0x45083832f91dd884ll,
	},
	{
		(key_t)0x31be0e7ef1744dbbll, (key_t)0xb3aa495ca5f72575ll, (key_t)0xed00d3937067d13dll, (key_t)0x300fedbbed49545all,
		(key_t)0xecc0742bbc40a789ll, (key_t)0xe48be55c4dca707dll, (key_t)0x8bd785a7a6fb3893ll, (key_t)0xe6d3f7620c013391ll,
		(key_t)0x84e8fbb435a402cbll, (key_t)0x32874de811db369all, (key_t)0x7e2777974c34234fll, (key_t)0x77aae66567477cball,
		(key_t)0x17ae78a355b85302ll, (key_t)0xf35d82e6e164eaf3ll, (key_t)0x6d8a716a114f1f2dll, (key_t)0xac56ac4b8f79d51ell,
		(key_t)0x48d329b47c3eeff2ll, (key_t)0x30cc4b733a3cb40bll, (key_t)0xebbcad49d6aa4fb7ll, (key_t)0x14b41d038624eef2ll,
		(key_t)0x02715bf1e72c63fell, (key_t)0x21e621f9ff890393ll, (key_t)0xbd0e37c294a668dfll, (key_t)0xdd93e38ebd7f3d12ll,
		(key_t)0x5ca22c64d052abd9ll, (key_t)0xfe552480b35fd20ell, (key_t)0xfb96f2c3aa0c67acll, (key_t)0xd02c248c109286bdll,
		(key_t)0xc889c898b0eed5aell, (key_t)0xeab5d9a1039ae307ll, (key_t)0xa7a37913f87404e2ll, (key_t)0x3166aeb745475975ll,
		(key_t)0x58be6b28e582435dll, (key_t)0xafbb850a3722198cll, (key_t)0x3315cba52b9e1a46ll, (key_t)0xacbbf08e449dea8dll,
		(key_t)0x9aa6c3b9814f83c7ll, (key_t)0x1e2fd4a5a13d63e9ll, (key_t)0x1e7b661c8a384d42ll, (key_t)0x1511b8f6d65e3b1cll,
		(key_t)0x300dfe80fad4493dll, (key_t)0x2ca627c1d971a517ll, (key_t)0xd51202854ba080fall, (key_t)0xb82c7e37a9c9e054ll,
		(key_t)0x51527a7ee91691e7ll, (key_t)0x78edc3253b538275ll, (key_t)0x6a07ee069a4959b2ll, (key_t)0x86138d6a146926b8ll,
		(key_t)0x2e35e9106ce2e36ell, (key_t)0x8ad61ad36129612bll, (key_t)0x423ad3c0b3047e3ell, (key_t)0x3ef9e0b28e338eabll,
		(key_t)0x3780b5ed96b95e3all, (key_t)0x6c511f2bbe820fe8ll, (key_t)0x76a7fc244015ef60ll, (key_t)0xfc0696ad8e78e7acll,
		(key_t)0x549b2e8776f8696fll, (key_t)0xa8bdb307a2c2dda6ll, (key_t)0x8f1e284461e96f1ell, (key_t)0x90e80eca41c5f47fll,
		(key_t)0xbcd3d8b35be9a579ll, (key_t)0x573193ff341735bcll, (key_t)0xc16e847f48fb9fbell, (key_t)0x3041d5d8d6e16490ll,
	},
	{
		(key_t)0x2e9d4116dcec43e2ll, (key_t)0xad496c8d8daa003fll, (key_t)0x20d561f9e4c5223all, (key_t)0x5f2e8a12956832dbll,
		(key_t)0x120a51e5fca5de70ll, (key_t)0x03406dbdd4af66a5ll, (key_t)0xb94148eb15b2e003ll, (key_t)0x091844c64ae0ce46ll,
		(key_t)0xd893778689b590edll, (key_t)0xf4c907519ab122fbll, (key_t)0x32ed7077ce4710edll, (key_t)0x1812c0a613440e2bll,
		(key_t)0x515dfb1c140f7ee0ll, (key_t)0x4da69bb22a632ec4ll, (key_t)0x571b47260fa6eee5ll, (key_t)0x13f81bfd1df1f6c9ll,
		(key_t)0xa21bfc7250b9b1a2ll, (key_t)0x3bc477e60856f60bll, (key_t)0xa1e59e69943779fcll, (key_t)0x15da62893bdefdb9ll,
		(key_t)0xced582fb72d4e962ll, (key_t)0x4d502b076c9b90cdll, (key_t)0xfdcd5dc6d033d2c0ll, (key_t)0xa2e2e6e3cf05ec54ll,
		(key_t)0x7fbea7d18d687ad6ll, (key_t)0xa4f40620347898b9ll, (key_t)0x6c5329cbfeeccf58ll, (key_t)0x54247a71bfd84a55ll,
		(key_t)0x3b2d57382bfe5cafll, (key_t)0x1f56b5428677fa7bll, (key_t)0x006c56e24e757318ll, (key_t)0x1308387f66a9ff20ll,
		(key_t)0x23246a15825325dell, (key_t)0x0662b169f8ffa5dfll, (key_t)0xc7d56c4d948f06cdll, (key_t)0x120c3fa53924c0d4ll,
		(key_t)0xf3ac39e6e9ad8818ll, (key_t)0x46bd45b255a699eell, (key_t)0xd781f8356aacb3d5ll, (key_t)0xa28c4fee0a5ddf39ll,
		(key_t)0x9e1b847679531cabll, (key_t)0xffc96562c74cb66ell, (key_t)0x9956edcf5d6ac5b3ll, (key_t)0x313c0bd1609f7d50ll,
		(key_t)0x060a4dce8f18324all, (key_t)0xf8fc4c3fd6ce9caell, (key_t)0x8c12889f0a26a956ll, (key_t)0x03ac9154198b0b79ll,
		(key_t)0x50f3f3bb9ec74892ll, (key_t)0x2b2e56b27718d542ll, (key_t)0xc9fa9d90de46c460ll, (key_t)0x35e6bb2e8a402807ll,
		(key_t)0x14bdb3206433d7a7ll, (key_t)0x96332893c44f0550ll, (key_t)0xd3c4a4a537b06844ll, (key_t)0xc52233f138d67251ll,
		(key_t)0x87ac8bbf1cef9a70ll, (key_t)0x0b94bf9ca8f017a3ll, (key_t)0x70556704e8d0a161ll, (key_t)0xb567a08cb3b3ff29ll,
		(key_t)0x9ed03a38afe26a4bll, (key_t)0x63a2f5e5dd6d1ed0ll, (key_t)0x6c6f714a89edc273ll, (key_t)0xaa688b28bcc70f97ll,
	},
	{
		(key_t)0x3ccff1e96ffb2edell, (key_t)0xb008dbe9f03e8618ll, (key_t)0xdadb07a029c7114all, (key_t)0x177f8838aa4525abll,
		(key_t)0xb0214e25f2005ed1ll, (key_t)0x06b290415f923180ll, (key_t)0x94ee938c4cac2903ll, (key_t)0xc9c10d74156aee24ll,
		(key_t)0xdcbff7b7f8eb1c97ll, (key_t)0x1c44b8eed0cd8849ll, (key_t)0x53684e00a0d769d4ll, (key_t)0x1eebfb7d90dd418bll,
		(key_t)0x49199c9d51be01adll, (key_t)0x6e777d67ac8ab141ll, (key_t)0x44ad921036602f25ll, (key_t)0xac83014bf56832adll,
		(key_t)0xe6a3d3694ca67118ll, (key_t)0xc11a3dae82b08912ll, (key_t)0x37109a547b9ac812ll, (key_t)0x86f48a14222a5028ll,
		(key_t)0x08397509b11a3c01ll, (key_t)0xbf7ea138324bec0all, (key_t)0xa16e8c0b3e88c3e2ll, (key_t)0x76204f67e942ddd8ll,
		(key_t)0x01698000decf5cb2ll, (key_t)0x703cb30892144971ll, (key_t)0x9e0526070f8d34c0ll, (key_t)0xe35f6d6babc3b0dcll,
		(key_t)0x45b740cfa6287c4ell, (key_t)0x352af19825780e01ll, (key_t)0xfadbff7798be797bll, (key_t)0x21731e4d51fb855dll,
		(key_t)0x0547b8dfe410891bll, (key_t)0xa43a3ead751433d9ll, (key_t)0x729433ad3c5c5947ll, (key_t)0x3a915aae6f25db56ll,
		(key_t)0xd1050570064c9185ll, (key_t)0xc948ee9528f171b7ll, (key_t)0x2cb3b15638d2013fll, (key_t)0x7ed155ca8071523fll,
		(key_t)0x7341153a2943c01dll, (key_t)0x059c8606469e39c7ll, (key_t)0xc7bf7f9cbc31a91all, (key_t)0xa5d0b680e3e2e197ll,
		(key_t)0xeb150533c3c7da3ell, (key_t)0x357e5b31469e51cell, (key_t)0x59b5a74f9535271bll, (key_t)0x8fff93abb8f26edfll,
		(key_t)0x6a51a439820d7fdall, (key_t)0xa5c36c8da79f5bc8ll, (key_t)0x61d3a9a03f8d0e0ell, (key_t)0x54a5bb6b56fc6672ll,
		(key_t)0x40be8c581c57c1ebll, (key_t)0x4629da0b5f31db9cll, (key_t)0x69e797ead35b4e5bll, (key_t)0x4fa43119acdf004ell,
		(key_t)0x6f78a373d49bf95bll, (key_t)0x67a1d796f736b91dll, (key_t)0xa93909a9bdefc3f6ll, (key_t)0x646c0da20aed69d2ll,
		(key_t)0xa821e196ec4d9997ll, (key_t)0x14d582e287737e7ell, (key_t)0x6bb47b2a70986bf3ll, (key_t)0xc33903b57440696all,
	},
	{
		(key_t)0xf8e437c696aa47f4ll, (key_t)0x5337b2ac38acc36bll, (key_t)0x325bb36fd1c2af52ll, (key_t)0xebd91eac51294a97ll,
		(key_t)0xec45348e0995e725ll, (key_t)0x71a2d6f194ed3a60ll, (key_t)0x2773d80ab31acbf0ll, (key_t)0xac640a7ddd6bdaa4ll,
		(key_t)0xf2600f996e2d9c3ell, (key_t)0xfedbb1ffc98c431ell, (key_t)0x881eab0e00b6eac3ll, (key_t)0xd8b177ded816a1c3ll,
		(key_t)0x7b85601fb4e6eab9ll, (key_t)0xb1d99edb3778373ell, (key_t)0xe501d53dc8795c58ll, (key_t)0x6e00abb90637b377ll,
		(key_t)0x545f2dea23db6893ll, (key_t)0x792d7267578f37a4ll, (key_t)0x867854d121541005ll, (key_t)0x8f92118bdaa2a953ll,
		(key_t)0xc402a528f588be44ll, (key_t)0x30b2a354b65753b8ll, (key_t)0x9d38da09ebaf7ae3ll, (key_t)0x45723c0f54a681afll,
		(key_t)0xee040d70aa3dde10ll, (key_t)0x5d2890ce760a0723ll, (key_t)0x56798b4fc6824bf7ll, (key_t)0x1aacde8d00ea29a4ll,
		(key_t)0x9889347ea0ec17bcll, (key_t)0x8cf9f98294569fa9ll, (key_t)0x3accf8d64d355dd3ll, (key_t)0xe2424ec6bc5e1495ll,
		(key_t)0x816585167cf2ff12ll, (key_t)0x3e5322de3e5a66dbll, (key_t)0xad3163ecce3c0f38ll, (key_t)0x5a3c3a5b1cc7165fll,
		(key_t)0x58631f189e2ceb9dll, (key_t)0x340eb0561cc0e95bll, (key_t)0xb33c2415f639bbc1ll, (key_t)0x56bd826441bfe1ddll,
		(key_t)0x09e1b00db44b415dll, (key_t)0x7ca8c64720a69703ll, (key_t)0xff9822d9246eb66ell, (key_t)0xfe84f0fc2653be4bll,
		(key_t)0x13a6c3d563f75887ll, (key_t)0x3544023dc5979600ll, (key_t)0x8a6eaf20996d198dll, (key_t)0x65c877785be2eb4ell,
		(key_t)0x0be1823054953a3bll, (key_t)0xd70af51ba2a3ae64ll, (key_t)0xb3ef1daa35cc7632ll, (key_t)0x4c78f2119ff29282ll,
		(key_t)0x06d5ce48c4f7d8c1ll, (key_t)0x34b4ab236c7add7ell, (key_t)0xac86be258c9e4998ll, (key_t)0x21b1ebcf987e23e4ll,
		(key_t)0xbbf5dd8e3ea708a2ll, (key_t)0x55a31581240d91d2ll, (key_t)0x618c36103e6abc41ll, (key_t)0x7f0ad03a70137b41ll,
		(key_t)0x6c4deab75bc9a794ll, (key_t)0x43f530aefb643b52ll, (key_t)0x2efb1b653fc80871ll, (key_t)0x1eb497aa696ebabcll,
	}
};

/**
 * Side to  move key used in zobrist hashing.
 */
const key_t sideKey = (key_t)0x873af583ac467d88ll;

/**
 * Castle keys used in zobrist hashing.
 */
const key_t castleKeys[16] = {
	(key_t)0x1CF0862FA4118029,
	(key_t)0x0D2A5CAB966B3D6C,
	(key_t)0x983776BC76F89649,
	(key_t)0xC25B6BA985D981EB,
	(key_t)0x401323CF9C867E87,
	(key_t)0x79A0D2472206B05E,
	(key_t)0xD5A24E6CEA6F1547,
	(key_t)0x685179AEF221CDC8,
	(key_t)0x9ECFBE96AE81F01F,
	(key_t)0x4DCBA787DD929238,
	(key_t)0x5FFEBFE5B5FE63CB,
	(key_t)0xAD7129835109B23B,
	(key_t)0x00E655AB85EDB01C,
	(key_t)0x896808BB91A8759A,
	(key_t)0x23492F84AE7EEB36,
	(key_t)0xCBE93E5F5D4F3BF6
};
