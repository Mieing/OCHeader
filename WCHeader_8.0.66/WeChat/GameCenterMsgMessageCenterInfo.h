@class GameCenterMsgSender, NSString, GameJumpInfo, GameCenterMsgSecondLineInfo, GameCenterMsgContentPic, GameCenterMsgSourceInfo;

@interface GameCenterMsgMessageCenterInfo : NSObject

@property (nonatomic) BOOL notInMsgCenter;
@property (retain, nonatomic) GameJumpInfo *msgCardInfo;
@property (retain, nonatomic) GameCenterMsgSender *msgSender;
@property (retain, nonatomic) NSString *userActionSubTitle;
@property (retain, nonatomic) NSString *firstLineContent;
@property (retain, nonatomic) GameCenterMsgSecondLineInfo *secondLineInfo;
@property (retain, nonatomic) GameCenterMsgContentPic *contentPicInfo;
@property (retain, nonatomic) GameCenterMsgSourceInfo *sourceInfo;

- (void).cxx_destruct;

@end
