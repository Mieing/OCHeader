@class NSString, AWEAwemeNewDetailBlockManager, AWEAwemeDetailTableViewController;

@interface AWEAwemeDetailCellManager : NSObject

@property (retain, nonatomic) AWEAwemeNewDetailBlockManager *blockManager;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) AWEAwemeDetailTableViewController *detailVC;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)aAWEPlayInteractionAdapter;
- (id)identifierAndCellClassName;
- (id)identifierWithModel:(id)a0;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (BOOL)shouldAddCellIdentifierForPicoVR;
- (BOOL)enableLLMRecommendSurveyCellWithModel:(id)a0;
- (void)registerToTableView:(id)a0;
- (void)setupBlockManager:(id)a0;
- (void).cxx_destruct;

@end
