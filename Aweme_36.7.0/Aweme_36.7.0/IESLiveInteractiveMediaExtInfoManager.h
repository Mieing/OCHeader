@class IESLiveMultiRtcInfo, NSDictionary, NSArray, IESLiveMultiLiveCoreInfo, IESLiveMCUContent;

@interface IESLiveInteractiveMediaExtInfoManager : NSObject

@property (copy, nonatomic) NSDictionary *rtcExtInfo;
@property (retain, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (copy, nonatomic) NSDictionary *multiRtcInfoDictionary;
@property (copy, nonatomic) NSArray *rtcSortedKeys;
@property (copy, nonatomic) NSDictionary *liveCoreExtInfo;
@property (retain, nonatomic) IESLiveMultiLiveCoreInfo *multiLiveCoreInfo;
@property (copy, nonatomic) NSDictionary *multiliveCoreInfoDictionary;
@property (copy, nonatomic) NSArray *liveCoreSortedKeys;
@property (retain, nonatomic) IESLiveMCUContent *mcuContent;

- (void)updateWithLiveCoreExtInfo:(id)a0 rtcExtInfo:(id)a1;
- (void)updateWithLiveCoreExtInfo:(id)a0 multiLiveCoreInfo:(id)a1 rtcExtInfo:(id)a2 multiRtcInfo:(id)a3 mcuContent:(id)a4;
- (id)livecoreExtInfoWithGuestCount:(long long)a0 isAnchor:(BOOL)a1;
- (id)liveCoreExtInfoWithPostion:(id)a0;
- (id)keyWithGuestCount:(long long)a0 isAnchor:(BOOL)a1 ofSortedKeys:(id)a2;
- (void)holdMultiRtcInfo:(id)a0 multiLiveCoreInfo:(id)a1;
- (void)updateWithLiveCoreSettings:(id)a0;
- (void)updateWithStartContext:(id)a0;
- (void)updateWithSwitchContext:(id)a0;
- (void)updateWithSwitchSceneMessage:(id)a0;
- (void)updateWithUILayoutChangedMessage:(id)a0;
- (void)updateWithInviteMessage:(id)a0;
- (void)updateWithReplyContext:(id)a0;
- (void)updateWithPermitMessage:(id)a0;
- (id)livecoreExtInfoWithParams:(id)a0;
- (id)rtcExtInfoWithGuestCount:(long long)a0 isAnchor:(BOOL)a1;
- (void).cxx_destruct;

@end
