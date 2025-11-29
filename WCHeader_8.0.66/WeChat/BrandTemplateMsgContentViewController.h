@class NSString, MMUILabel;

@interface BrandTemplateMsgContentViewController : BaseMsgContentViewController

@property (retain, nonatomic) MMUILabel *emptyLabel;
@property (retain, nonatomic) NSString *templateSessionId;
@property (retain, nonatomic) NSString *templateId;

- (void)viewDidLoad;
- (void)initEmptyLabel;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)reloadTabeView;
- (void)updateTitleView:(id)a0 ignoreAnimation:(BOOL)a1;
- (void).cxx_destruct;

@end
