@class NSArray, NSDictionary, IESLiveMultiRtcInfo, NSString, IESLiveMultiLiveCoreInfo, IESLiveMCUContent;

@interface IESLiveInteractBaseParamsEntity : NSObject

@property (nonatomic) BOOL supportOpenCamera;
@property (copy, nonatomic) NSArray *playModes;
@property (copy, nonatomic) NSDictionary *rtcExtInfo;
@property (retain, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (copy, nonatomic) NSDictionary *multiRtcInfoDictionary;
@property (copy, nonatomic) NSDictionary *liveCoreExtInfo;
@property (retain, nonatomic) IESLiveMultiLiveCoreInfo *multiLiveCoreInfo;
@property (copy, nonatomic) NSDictionary *multiliveCoreInfoDictionary;
@property (retain, nonatomic) IESLiveMCUContent *mcuContent;
@property (copy, nonatomic) NSString *roomExRtcInfo;
@property (copy, nonatomic) NSString *roomExRtcChannelId;
@property (nonatomic) long long roomExRtcRoomId;
@property (copy, nonatomic) NSArray *liveCoreSortedKeys;
@property (copy, nonatomic) NSArray *rtcSortedKeys;
@property (nonatomic) BOOL supportEqualDynamicLayout;
@property (nonatomic) BOOL isInGuestBattle;
@property (nonatomic) BOOL isFirstInit;
@property (copy, nonatomic) NSString *chorusAccompanyInfoRtcAppId;
@property (copy, nonatomic) NSString *chorusAccompanyInfoRtcRoomId;
@property (copy, nonatomic) NSString *chorusAccompanyInfoRtcUserId;

- (void)updateWithLiveCoreExtInfo:(id)a0 multiLiveCoreInfo:(id)a1 rtcExtInfo:(id)a2 multiRtcInfo:(id)a3 mcuContent:(id)a4;
- (id)livecoreExtInfoWithGuestCount:(long long)a0 isAnchor:(BOOL)a1;
- (id)liveCoreExtInfoWithPostion:(id)a0;
- (id)keyWithGuestCount:(long long)a0 isAnchor:(BOOL)a1 ofSortedKeys:(id)a2;
- (void)updateWithStartContext:(id)a0;
- (void)updateWithSwitchSceneMessage:(id)a0;
- (void)updateWithUILayoutChangedMessage:(id)a0;
- (void)updateWithReplyContext:(id)a0;
- (id)rtcExtInfoWithGuestCount:(long long)a0 isAnchor:(BOOL)a1;
- (void)holdRTCInfo:(id)a0 liveCoreInfo:(id)a1;
- (void)updateRTCExtInfo:(id)a0 liveCoreExtInfo:(id)a1;
- (void)updateRTCExtInfoStr:(id)a0 liveCoreExtInfoStr:(id)a1;
- (void)updateWithResumeAudienceContent:(id)a0;
- (void)updateWithChangePlayModeData:(id)a0;
- (BOOL)updateWithExRtcRoomMessage:(id)a0;
- (void)updateWithLinkmicLinkAudienceReplyContext:(id)a0;
- (void)updateWithInitRTCResponse:(id)a0;
- (id)rtcExtInfoWithPostion:(id)a0;
- (void).cxx_destruct;

@end
