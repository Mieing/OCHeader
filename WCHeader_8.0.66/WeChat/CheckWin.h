@class NSString, NSMutableArray, JumpItem;

@interface CheckWin : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSMutableArray *checkItem;
@property (retain, nonatomic) JumpItem *leftButton;
@property (retain, nonatomic) JumpItem *rightButton;

+ (void)initialize;

@end
