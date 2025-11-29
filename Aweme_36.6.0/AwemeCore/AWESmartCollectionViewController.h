@class AWECodeGenLLMRecommendMixInfoModel, NSDictionary, NSString, AWEGradientView;

@interface AWESmartCollectionViewController : AWEUserWorkViewController <AWEUserGotoPersonProtocol>

@property (retain, nonatomic) NSDictionary *intelligentLogExtraDict;
@property (retain, nonatomic) AWEGradientView *waterFallGradientView;
@property (retain, nonatomic) AWECodeGenLLMRecommendMixInfoModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userWorkViewControllerConfigWithProfileContext:(id)a0;
+ (id)componentArrayWithProfileContext:(id)a0;
+ (id)customSectionArrayWithProfileContext:(id)a0;

- (id)requestCommonParams;
- (unsigned long long)gotoPersonType;
- (id)trackParamsWith:(id)a0;
- (id)awemeSectionViewModel;
- (id)initWithProfileContext:(id)a0 llmRecommendModel:(id)a1 intelligentLogExtraDict:(id)a2;
- (void)detailEnterTrack;
- (void)configDetailViewController:(id)a0;
- (id)userID;
- (void).cxx_destruct;
- (id)requestURL;
- (void)updateBackgroundColor;
- (long long)tableType;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)tableName;
- (id)requestMethod;
- (void)backButtonTapped;

@end
