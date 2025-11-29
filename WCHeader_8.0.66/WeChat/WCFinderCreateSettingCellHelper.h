@interface WCFinderCreateSettingCellHelper : NSObject

+ (id)createShowInWXProfileSwitchCellIfNeedDisplay:(double)a0 enable:(BOOL)a1 navVC:(id)a2;
+ (id)createShowInWXProfileSectionWithWidth:(double)a0 navVC:(id)a1 target:(id)a2 selector:(SEL)a3;
+ (id)createShowInWXProfileSectionFooterWithIsSelected:(BOOL)a0 width:(double)a1 navVC:(id)a2;
+ (id)createFinderSettingAccountSelectedCell:(double)a0 target:(id)a1 selector:(SEL)a2 title:(id)a3 detailTitle:(id)a4 headURL:(id)a5 isFinder:(BOOL)a6 selected:(BOOL)a7;
+ (id)createFinderSettingAccountSelectedCell:(double)a0 target:(id)a1 selector:(SEL)a2 title:(id)a3 detailTitle:(id)a4 headURL:(id)a5 headImageSize:(id)a6 isFinder:(BOOL)a7 selected:(BOOL)a8;
+ (id)createAccountCellCustomViewTitle:(id)a0 detailTitle:(id)a1 headURL:(id)a2 headImageSize:(id)a3 width:(double)a4 isFinder:(BOOL)a5;
+ (id)createShowInWXProfileLeftView:(double)a0 navVC:(id)a1 enable:(BOOL)a2;
+ (id)createFinderToBrandCellWithWidth:(double)a0 sel:(SEL)a1 target:(id)a2 title:(id)a3 desc:(id)a4 on:(BOOL)a5 disable:(BOOL)a6;
+ (id)createLeftViewWithWidth:(double)a0 titleText:(id)a1 detailText:(id)a2 isDisable:(BOOL)a3 delegate:(id)a4;
+ (id)formatJumpWXProfileWording:(id)a0 href:(id)a1;
+ (void)exposeShowInWXProfileSwitchCellJumpProfileItem;
+ (id)createTwoLineCell:(id)a0 secondLine:(id)a1 accessibility:(id)a2 width:(double)a3 switchIsOn:(BOOL)a4 switchChangeTarget:(id)a5 action:(SEL)a6;
+ (id)createTwoLineCell:(id)a0 secondLine:(id)a1 accessibility:(id)a2 width:(double)a3 switchIsOn:(BOOL)a4 switchChangeTarget:(id)a5 action:(SEL)a6 linkDelegate:(id)a7;

@end
