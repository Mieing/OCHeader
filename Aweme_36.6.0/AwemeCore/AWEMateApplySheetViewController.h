@class AWERelationSheetContext, AWERelationSheetApplyMessageSection, AWERelationSheetRemarkSection;

@interface AWEMateApplySheetViewController : AWERelationSheetViewController

@property (retain, nonatomic) AWERelationSheetContext *context;
@property (retain, nonatomic) AWERelationSheetApplyMessageSection *applyMessageSection;
@property (retain, nonatomic) AWERelationSheetRemarkSection *remarkSection;
@property (nonatomic) BOOL viewHasAppeared;

- (void)p_setupSections;
- (void)p_send;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
