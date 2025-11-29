@interface AWEFeedCellManager : NSObject

@property (nonatomic) long long type;

+ (Class)aAWEFeedModuleServiceDOUYINDSAdapterClass;

- (BOOL)cellReuseIdentifierContainsCommerceSpecificWithModel:(id)a0;
- (id)identifierAndCellClassName;
- (id)aAWEFeedModuleServiceDOUYINDSAdapter;
- (id)identifierWithModel:(id)a0;
- (BOOL)shouldAddCellIdentifierForPicoVR;
- (BOOL)enableLLMRecommendSurveyCellWithModel:(id)a0;
- (void)registerToTableView:(id)a0;
- (BOOL)enablePlayletForCellReuseIdentifier;
- (BOOL)enableBackupForCellReuseIdentifier;
- (id)initWithType:(long long)a0;

@end
