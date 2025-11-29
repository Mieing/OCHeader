@class NSString;
@protocol WCTimelineLogicControllerDelegate;

@interface WCTimelineADLogicController : NSObject <WCTimelineLogicControllerImplProtocol>

@property (weak, nonatomic) id<WCTimelineLogicControllerDelegate> delegate;
@property (nonatomic) BOOL canLogAdContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)startAdDisappear;
- (void)startAdResumeAppear;
- (void)startAdOnTimelineReloaded;
- (void)tryReportAdCell:(id)a0;
- (void)reportAdExposureFromCachedBodyWrap;
- (void)recordADBodyStartInfo:(id)a0 forRowAtIndexPath:(id)a1;
- (void)recordADBodyMiddleInfo:(id)a0 forRowAtIndexPath:(id)a1;
- (void)recordADBodyEndInfo:(id)a0 forRowAtIndexPath:(id)a1;
- (void)recordADCommentStartInfo:(id)a0 forRowAtIndexPath:(id)a1;
- (void)recordADCommentMiddleInfo:(id)a0 forRowAtIndexPath:(id)a1;
- (void)recordADCommentEndInfo:(id)a0 forRowAtIndexPath:(id)a1;
- (void)calADCellYVisible:(BOOL *)a0 centerVisible:(BOOL *)a1 bottomVisible:(BOOL *)a2 forRowAtIndexPath:(id)a3 inTableView:(id)a4;
- (void)onSearchTopicTagClicked:(id)a0 scene:(long long)a1;
- (void)onCommentViewTopicTagClicked:(id)a0 ofDataItem:(id)a1 scene:(long long)a2;
- (void)Reset;
- (void)Register;
- (void).cxx_destruct;

@end
