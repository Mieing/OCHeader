@class CJPayResultPageModel, CJPayFullResultPageView, NSDictionary;

@interface CJPayFullResultPageViewController : CJPayFullPageBaseViewController

@property (retain, nonatomic) CJPayFullResultPageView *resultPageView;
@property (retain, nonatomic) CJPayResultPageModel *model;
@property (copy, nonatomic) NSDictionary *trackerParams;
@property (nonatomic) BOOL isFirstDidAppear;
@property (copy, nonatomic) id /* block */ closeCompletion;

- (void)p_close;
- (id)initWithCJResultModel:(id)a0 trackerParams:(id)a1;
- (void)p_closeActionAfterTime:(int)a0;
- (void)p_updateTrackerParams;
- (void)p_pageShowEvent;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
