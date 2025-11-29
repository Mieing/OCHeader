@class NSString, JumpItem;

@interface CheckRecvNameWin : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) JumpItem *leftButton;
@property (retain, nonatomic) JumpItem *rightButton;
@property (retain, nonatomic) NSString *recvName;
@property (retain, nonatomic) NSString *checkRecvNameSign;
@property (nonatomic) unsigned int payAmount;

+ (void)initialize;

@end
