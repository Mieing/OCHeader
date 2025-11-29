@class IESLiveLGameDuringLiveRTCInfo, NSString, IESLiveLGameDuringLiveInfoCardItemStatus, IESLiveLGameDuringLiveRoomStorage, IESLiveAnchorInteractiveGameItem, NSNumber;

@interface IESLiveLGameDuringLiveModel : NSObject

@property (copy, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameType;
@property (copy, nonatomic) NSString *gameIconURL;
@property (copy, nonatomic) NSString *gameDescription;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *taskSource;
@property (copy, nonatomic) NSString *startID;
@property (copy, nonatomic) NSString *lotteryGiftURL;
@property (copy, nonatomic) NSString *gameSchema;
@property (copy, nonatomic) NSString *originExtra;
@property (copy, nonatomic) NSString *searchWord;
@property (retain, nonatomic) IESLiveLGameDuringLiveRoomStorage *roomStorage;
@property (retain, nonatomic) IESLiveLGameDuringLiveInfoCardItemStatus *infoCardItemStatus;
@property (retain, nonatomic) IESLiveAnchorInteractiveGameItem *gameItem;
@property (nonatomic) BOOL fetchGameStopSuccess;
@property (retain, nonatomic) NSNumber *entranceFrom;
@property (copy, nonatomic) NSString *panelFrom;
@property (retain, nonatomic) NSNumber *bidType;
@property (nonatomic) BOOL isWaitingIM;
@property (nonatomic) long long liveScene;
@property (nonatomic) unsigned long long instantPlayOpenStatus;
@property (retain, nonatomic) IESLiveLGameDuringLiveRTCInfo *rtcInfo;

- (void)appendRtcInfoWithStartConfig:(id)a0;
- (void).cxx_destruct;

@end
