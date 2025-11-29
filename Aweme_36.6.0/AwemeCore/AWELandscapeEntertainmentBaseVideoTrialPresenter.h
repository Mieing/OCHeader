@class AWEPageContext, NSString, AWEAwemeModel;
@protocol AWEEntertainmentVideoTrialDelegate, AWELandscapePageContextInteractionProtocol;

@interface AWELandscapeEntertainmentBaseVideoTrialPresenter : NSObject <AWEEntertainmentVideoTrialPresenterProtocol>

@property (weak, nonatomic) id<AWEEntertainmentVideoTrialDelegate> internalDelegate;
@property (nonatomic) long long currWatchStatus;
@property (nonatomic) BOOL hasReportTry;
@property (nonatomic) BOOL hasReportTryEnd;
@property (readonly, weak, nonatomic) AWEAwemeModel *model;
@property (readonly, weak, nonatomic) AWEPageContext<AWELandscapePageContextInteractionProtocol> *context;
@property (weak, nonatomic) id<AWEEntertainmentVideoTrialDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 context:(id)a1;
- (BOOL)isTrial;
- (void)handleEventWithType:(long long)a0;
- (id)getPreviewConfig;
- (void)sendTrialDidFinishEvent;
- (void)sendTrialDidStartEvent;
- (void)trackTrialDidStart;
- (void)trackTrialDidFinish;
- (void)checkStatusWithPlayBackTime:(double)a0;
- (double)getRemainingTimeWithPlayBackTime:(double)a0;
- (id)tryTrackCommonParams;
- (id)tryEndTrackCommonParams;
- (void)viewDidAppear;
- (void).cxx_destruct;

@end
