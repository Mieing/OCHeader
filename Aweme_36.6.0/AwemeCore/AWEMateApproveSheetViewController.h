@class AWERelationSheetContext;

@interface AWEMateApproveSheetViewController : AWERelationSheetViewController

@property (retain, nonatomic) AWERelationSheetContext *context;

- (void)p_close;
- (void)p_setupSections;
- (void)p_trackEditRemarkActionType:(id)a0 actionStatus:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)p_finish;

@end
