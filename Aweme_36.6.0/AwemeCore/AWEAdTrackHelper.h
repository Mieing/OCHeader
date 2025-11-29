@class NSString, NSDictionary, NSNumber, AWEURLModel;
@protocol IESVideoPlayerProtocol;

@interface AWEAdTrackHelper : HTSService <AWEAdTrackHelper>

@property (retain, nonatomic) NSNumber *effectivePlayTime;
@property (retain, nonatomic) AWEURLModel *effectivePlayTrackURLList;
@property (nonatomic) double firstClickTimeInEachLoop;
@property (nonatomic) BOOL shouldTrackDTV;
@property (nonatomic) BOOL hasTrackedForThisLoop;
@property (nonatomic) BOOL hasClickedBeforeEffectivePlayTime;
@property (copy, nonatomic) NSDictionary *qcpxReqParams;
@property (weak, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldTrackDTVWithModel:(id)a0;
- (void)updateTrackStateWithModelIfNeeded:(id)a0;
- (void)trackDTVIfNeededWithModel:(id)a0;
- (void)trackDTVIfNeededWithAdContext:(id)a0;
- (void)fetchQCPXCouponWithModel:(id)a0 extraInfo:(id)a1 context:(id)a2;
- (id)bizTagForLive:(id)a0;
- (void)liveFetchAdCouponForAudience:(id)a0;
- (void)fetchQCPXCouponWithDic:(id)a0 showToast:(BOOL)a1 urlPath:(id)a2;
- (void).cxx_destruct;

@end
