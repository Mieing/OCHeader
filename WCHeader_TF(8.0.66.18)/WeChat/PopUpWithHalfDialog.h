@class NSString, ButtomJumpInfo, ComonPromptInfo;

@interface PopUpWithHalfDialog : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int iconType;
@property (retain, nonatomic) ComonPromptInfo *content;
@property (retain, nonatomic) ButtomJumpInfo *firstButton;
@property (retain, nonatomic) ButtomJumpInfo *secondButton;
@property (retain, nonatomic) NSString *mainIcon;
@property (retain, nonatomic) NSString *mainIconDm;
@property (retain, nonatomic) NSString *mainTitle;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) NSString *imgUnderContent;

+ (void)initialize;

@end
