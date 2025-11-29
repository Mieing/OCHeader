@class AWEPlayInteractionContext, NSString, AWEAwemeModel;
@protocol AWEEntertainmentVideoTrialDelegate, AWEEntertainmentVideoTrailTagViewProtocol;

@interface AWEEntertainmentBaseVideoTrialPresenter : NSObject <AWEEntertainmentVideoTrialPresenterProtocol>

@property (weak, nonatomic) id<AWEEntertainmentVideoTrailTagViewProtocol> view;
@property (weak, nonatomic) id<AWEEntertainmentVideoTrialDelegate> internalDelegate;
@property (nonatomic) long long currWatchStatus;
@property (nonatomic) BOOL hasReportTry;
@property (nonatomic) BOOL hasReportTryEnd;
@property (readonly, weak, nonatomic) AWEAwemeModel *model;
@property (readonly, weak, nonatomic) AWEPlayInteractionContext *context;
@property (weak, nonatomic) id<AWEEntertainmentVideoTrialDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 context:(id)a1;
- (BOOL)isTrial;
- (void)handleEventWithType:(long long)a0;
- (id)getPreviewConfig;
- (void)trackButtonShow;
- (void)sendTrialDidFinishEvent;
- (void)sendTrialDidStartEvent;
- (void)trackTrialDidStart;
- (void)trackTrialDidFinish;
- (void)checkStatusWithPlayBackTime:(double)a0;
- (double)getRemainingTimeWithPlayBackTime:(double)a0;
- (id)tryTrackCommonParams;
- (id)tryEndTrackCommonParams;
- (void)sendTrialRemainingTimeDidChangeEvent:(double)a0;
- (void)attachView:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;

@end
