@class NSString, GameJumpInfo, GameCenterMsgRemarkInfo;

@interface GameCenterMsgSender : NSObject

@property (retain, nonatomic) NSString *msgSenderHeadIconUrl;
@property (retain, nonatomic) NSString *msgSenderName;
@property (retain, nonatomic) NSString *msgSenderBadgeIconUrl;
@property (retain, nonatomic) GameJumpInfo *msgSenderJumpInfo;
@property (retain, nonatomic) NSString *remark;
@property (retain, nonatomic) GameCenterMsgRemarkInfo *remarkInfo;

- (void).cxx_destruct;

@end
