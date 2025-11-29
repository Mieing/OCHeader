@class NSString, NSDictionary, AWEAwemeModel;
@protocol IESLivePlayerProtocol, AWELivePaidStreamControlProvider, AWELivePaidStreamViewModelDelegate, AWELivePaidLivePlayerDelegate;

@interface AWELivePaidStreamViewModel : NSObject <IESLivePaidStreamAction, AWELivePaidStreamViewModelProtocol>

@property (weak, nonatomic) id<IESLivePlayerProtocol> player;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long liveSource;
@property (retain, nonatomic) id<AWELivePaidStreamControlProvider> paidStreamControl;
@property (nonatomic) double startLoadTime;
@property (nonatomic) double playStartTime;
@property (nonatomic) double playEndTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWELivePaidLivePlayerDelegate> delegate;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (weak, nonatomic) id<AWELivePaidStreamViewModelDelegate> viewModelDelegate;

- (void)enterRoomAction;
- (id)commonTrackParams;
- (void)receiveChannelMessage:(id)a0;
- (void)trackWithEvent:(id)a0 extraParams:(id)a1;
- (void)paidStreamTrialDidStart:(long long)a0;
- (void)paidStreamTrialDidStop:(long long)a0;
- (void)paidStreamTrialDidFinish:(long long)a0 reason:(unsigned long long)a1;
- (void)paidStreamTrialDidPaid:(long long)a0;
- (void)paidStreamTrialRemainingTimeChangeTo:(double)a0 scene:(long long)a1;
- (void)paidStreamTrialDidPromised:(long long)a0;
- (BOOL)vipPaidStreamDisabled;
- (void)trackPlayDuration;
- (void)trackLoadAndPlayDuration;
- (id)trackParams:(id)a0;
- (void)requestPaidLiveBeforePlayWithBlock:(id /* block */)a0;
- (void)playerDidStart;
- (void)playerDidStop;
- (BOOL)shouldPlayWithMuteAndShowMaskView;
- (void)installPaidStreamWithModel:(id)a0 liveSource:(long long)a1;
- (void)resetTime;
- (void)uninstall;
- (void).cxx_destruct;
- (double)currentTime;
- (id)initWithPlayer:(id)a0;
- (void)updateWithModel:(id)a0;

@end
