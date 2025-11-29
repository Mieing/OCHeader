@class NSString, JumpItem;

@interface AmountRemindWin : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) JumpItem *leftButton;
@property (retain, nonatomic) JumpItem *rightButton;
@property (nonatomic) unsigned int remindAmount;

+ (void)initialize;

@end
