@class NSString, NSDictionary, UIImage, NSNumber;

@interface AWESearchAIGCDataController : AWESearchVerticalDataController <AWESearchAIGCRequestParamsDelegate>

@property (retain, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSString *backtrace;
@property (nonatomic) BOOL isDoubleColumnLeft;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *initialSearchSource;
@property (copy, nonatomic) NSString *conversationId;
@property (retain, nonatomic) NSDictionary *appendRefreshParams;
@property (copy, nonatomic) NSString *tosid;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long imageHeight;
@property (nonatomic) long long imageWidth;
@property (copy, nonatomic) NSString *searchUniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableAIGCLynxCardTemplateDowngrade;

- (void)setContainerConfig:(id)a0;
- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (void)refreshResponse:(id)a0;
- (void)loadMoreResponse:(id)a0;
- (id)customInnerVCModelsFromOuterDataModels:(id)a0;
- (id)customAwemeModelFromOuterDataModel:(id)a0;
- (id)p_getValidResponse:(id)a0;
- (void)setUpRequestParamsDelegate;
- (void)generateLeafModelsAndCardArrayForResponse:(id)a0 isFromSteam:(BOOL)a1;
- (void)generateCardArrayForResponse:(id)a0;
- (id)generalCachalotRequestCommonParams;
- (void)preGenerateLeafModelsForResponse:(id)a0 isFromSteam:(BOOL)a1;
- (id)generalCachalotRequestRefreshParams;
- (id)generalCachalotRequestLoadMoreParams;
- (void).cxx_destruct;
- (id)init;

@end
