#pragma once

#include <vector>
#include "Tree.hpp"

ptrdiff_t LogicOffset = 0x16810;

std::vector<Text> Logic = {
	//Index 0
	{"田村光太郎（たむら・こうたろう）", "Tamura Koutarou"},
	{"両目を鋏で貫かれ殺害された。", "Murdered. Scissors were used to gouge his eyes."},
	{"水瀬遥（みなせ・はるか）", "Minase Haruka"},
	{"牧村早苗（まきむら・さなえ）", "Makimura Sanae"},
	{"Ｃ村で起きていた多数の行方不明事件、", "Missing Persons cases have been reported in Town C."},
	{"Ｃ村の福祉施設の理事長。", "Chairman of the Welfare facility in Town C."},
	{"砂堀優子（すなほり・ゆうこ）", "Sunahori Yuuko"},
	{"砂堀将春（すなほり・まさはる）", "Sunahori Masaharu"},
	{"砂堀聡史（すなほり・さとし）", "Sunahori Satoshi"},
	{"黒田邦雄（くろだ・くにお）", "Kuroda Kunio"},
	{"風守隼人（かざもり・はやと）", "Kazamori Hayato"},
	{"思った事がすぐ口に出てしまう。", "Can't help but think out loud."},
	{"立花美鈴（たちばな・みすず）", "Tachibana Misuzu"},
	{"ブラインドマン", "Blind Man"},
	{"関本爽二朗（せきもと・そうじろう）", "Sekimoto Soujirou"},
	{"津田沼陽一（つだぬま・よういち）", "Tsudanuma Youichi"},
	{"金谷大夢（かなや・ひろむ）","Kanaya Hiromu"},
	{"どの捜査現場にも野次馬をしている。", "A Wild Card"},
	{"竹中慎一郎（たけなか・しんいちろう）", "Takenaka Shinichirou"},
	{"現在の職業は不詳。", "Ocupation Unknown"},
	{"竹中浩三（たけなか・こうぞう）", "Takenaka Kouzou"},
	{"竹中千鶴子（たけなか・ちづこ）", "Takenaka Chizuko"},
	{"亘胡桃（わたり・くるみ）", "Watari Kuromi"},
	{"いつも笑みを絶やさないのが魅力でもあり怖さでもある。", "Constantly smiling. Is both charming yet scary."},
	{"生活費を稼ぐために夜のお店で働いているらしい。", "Work's a night club to make ends meet."},
	{"遥さんと接点があり、田村さんと自分の家族の殺害を供述。", "Had a connection with Haruka. Stated they killed Tamura and their own family."},

	{"空欄のまま保留", "Blank, Pending Investigation"},
	{"関本は模範囚だ", "Sekimoto is a model prisoner."},
	{"関本はインテリだ", "Sekimoto is an academic."},
	{"関本はナンパ野郎だ", "Sekimoto is a pick-up artist."},
	{"関本はコメディアンだ", "Sekimoto is a comedian."},
	{"関本はペテン師だ", "Sekimoto is a phony."},
	{"関本はイカれた殺人鬼だ", "Sekimoto is a psychopath."},
	{"関本は地下牢の悪魔だ", "Sekimoto is the Devil in the Dungeon."},

	{"空欄のまま保留た牧師だ", "Blank, Pending Investigation."},
	{"ブラインドマンの正体は私だ", "The Blind Man's true identity is Me."},
	{"ブラインドマンの正体は風守さんだ", "The Blind Man's true identity is Kazamori"},
	{"ブラインドマンの正体は黒田課長だ", "The Blind Man's true identity is Kuroda"},
	{"ブラインドマンの正体は関本だ", "The Blind Man's true identity is Sekimoto"},
	{"ブラインドマンの正体は美鈴だ", "The Blind Man's true identity is Tachibana"},
	{"ブラインドマンの正体は遥さんだ", "The Blind Man's true identity is Haruka"},
	{"ブラインドマンの正体は砂堀さんだ", "The Blind Man's true identity is Sunahori"},
	{"ブラインドマンの正体は優子さんだ", "The Blind Man's true identity is Yuuko"},
	{"ブラインドマンの正体は聡史くんだ", "The Blind Man's true identity is Satoshi"},
	{"ブラインドマンの正体は早苗さんだ", "The Blind Man's true identity is Sanae"},
	{"ブラインドマンの正体は津田沼さんだ", "The Blind Man's true identity is Tsudanuma"},
	{"ブラインドマンの正体は竹中慎一郎だ", "The Blind Man's true identity is Takenaka.S"},
	{"ブラインドマンの正体は亘さんだだ", "The Blind Man's true identity is Watari"},

	{"空欄のまま保留正体は金谷大夢だ", "Blank, Pending Investigation."},
	{"遥さんと田村さんは友人関係だった", "Haruka and Tamura were best friends."},
	{"遥さんと田村さんは恋人同士だった", "Haruka and Tamura were lovers."},
	{"遥さんは田村さんにＤＶを受けていた", "Haruka was subjected to domestic violence by Tamura."},
	{"遥さんの青あざは田村さんによるものだ", "Haruka's bruising is caused by Tamura."},
	{"遥さんは田村さんに復讐をしたものだ", "Haruka was the one who took revenge on Tamura."},
	{"遥さんは田村さんに怨恨があった", "Haruka had a grudge against Tamura."},

	{"空欄のまま保留の愛人だったのだ", "Blank, Pending Investigation."},
	{"田村さんは砂堀さんに貸し剥がしをした", "Tamura stripped Sunahori of his debt."},
	{"砂堀さんは田村さんに殴り込みに行った", "Sunahori went to confront Tamura."},
	{"砂堀さんは田村さんに土下座した", "Sunahori got down on his knees to Tamura."},
    {"砂堀さんは田村さんに怨恨があった", "Sunahori had a grudge against Tamura."},

	{"空欄のまま保留んに怨恨があったた", "Blank, Pending Investigation."},
	{"牧村さんは田村さんに怨恨があった", "Makimura had a grudge against Tamura."},
	{"牧村さんは田村さんと面識がなかった", "Makimura had never met Tamura."},
    {"牧村さんは田村さんの保険金が目的だった", "Makimura was after Tamura's insurance money."},

	{"空欄のまま保留んの保険金が目的だった", "Blank, Pending Investigation."},
	{"津田沼さんはスクープを欲しがっている", "Tsudanuma wants the scoop."},
	{"津田沼さんはジャーナリズムを大切にしている",  "Tsudanuma values journalism."},

	{"空欄のまま保留ポーズをするつもりだいる", "Blank, Pending Investigation."},
	{"金谷大夢は善良な市民だするつもりだいる", "Kanaya Hiromu is a good citizen."},
	{"金谷大夢は偉大なる小説家だつもりだいる", "Kanaya Hiromu is a great novelist."},
	{"金谷大夢の正体は餓鬼だったつもりだいる", "Kanaya Hiromu is a Brat."},

	{"空欄のまま保留毒者だったつもりだいる", "Blank, Pending Investigation."},
	{"遥さんと金谷大夢は共犯だったもりだいる", "Haruka & Kanaya were accomplices."},
	{"遥さんにとって金谷大夢は都合のいい客だった", "To Haruka, Kanaya was a convenient customer."},
	{"遥さんは金谷大夢から札束を受け取っていた", "Haruka had received a wad of cash from Kanaya."},
	{"遥さんは汚物処理担当として金谷大夢に接していた", "Haruka was treating Kanaya as the one in charge of filth."},

	{"空欄のまま保留にダイエット薬品を渡していた", "Blank, Pending Investigation."},
	{"ブラインドマンと金谷大夢は共犯だったていた", "The Blind Man & Kanaya are accomplices."},
	{"ブラインドマンは金谷大夢にダイエット薬品を渡していた", "The Blind Man was giving Kanaya the Diet Pills."},
	{"ブラインドマンは金谷大夢を身代わりにさせたしていた", "The Blind Man had Kanaya take his place."}
};