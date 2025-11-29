@class NSString, AWEIMWaittingReplyLoadingView, NSDate, NSMutableArray;
@protocol AWEFormatTyper;

@interface AWEIMMessageText_Format_Typewriter_Plugin : AWEIMFlexComponent <AWEIMMessageTextPluginProtocol>

@property (retain, nonatomic) id<AWEFormatTyper> typer;
@property (retain, nonatomic) AWEIMWaittingReplyLoadingView *loadingView;
@property (nonatomic) BOOL shouldShowLoadingView;
@property (retain) NSString *writedString;
@property (nonatomic) BOOL isWriting;
@property (nonatomic) BOOL isMultiSelected;
@property (nonatomic) BOOL isEnterFromReport;
@property (retain, nonatomic) NSMutableArray *hichesTime;
@property (retain, nonatomic) NSDate *lastEmptyWaitingQueueTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFormatTypewriter;
+ (id)animationOptimizeConfig;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)multiSelectUpdateIsEditMode:(BOOL)a0;
- (id)attributedContent;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)afterRenderCellDidFinished;
- (void)p_addKVO;
- (BOOL)shouldFetchMessage:(id)a0;
- (BOOL)isOverTimeLimitWithCreateTime:(double)a0 now:(double)a1;
- (void)markWaiting;
- (void)markWriting;
- (void)trackOnScreenEarlyIfNeeded;
- (void)trackHitchesIfNeeded;
- (void)p_trackXiaoheFinishStream;
- (void)p_createTyper;
- (void)feedTextData:(id)a0 isLast:(BOOL)a1;
- (id)getLoadingStr;
- (void).cxx_destruct;
- (id)displayMessage;
- (void)beginLoading;

@end
