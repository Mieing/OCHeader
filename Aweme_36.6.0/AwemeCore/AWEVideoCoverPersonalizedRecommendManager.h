@class NSString, UIImage, AWEVideoCoverImageUploadAdaptor;

@interface AWEVideoCoverPersonalizedRecommendManager : NSObject <AWEVideoCoverPersonalizedRecommendManagerProtocol>

@property (retain, nonatomic) AWEVideoCoverImageUploadAdaptor *coverImageUploadAdaptor;
@property (retain, nonatomic) NSString *selectedCoverURI;
@property (nonatomic) BOOL isImageUploading;
@property (copy, nonatomic) id /* block */ fetchCovetTemplateBlock;
@property (copy, nonatomic) id /* block */ fetchCovetTextTemplateBlock;
@property (nonatomic) long long videoCoverType;
@property (retain, nonatomic) UIImage *uploadImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildTemplatesWithTemplates:(id)a0 categoryId:(id)a1 categoryName:(id)a2;
+ (id)personalizedRecommendManager;
+ (id)paramsForFetchTemplatesCategoriesFromLokiWithIsLandscape:(BOOL)a0;

- (BOOL)isPersonalRecommendEnable;
- (void)preFetchNeighbourCategoriesWithIndex:(long long)a0 categoryModels:(id)a1;
- (void)fetchTemplateWithCategoryModel:(id)a0 completion:(id /* block */)a1;
- (void)cleanUploadAndFetch;
- (void)uploadCoverImage:(id)a0 completion:(id /* block */)a1;
- (id)post:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
- (void)fetchTextTemplateWithPannelName:(id)a0 completion:(id /* block */)a1;
- (void)fetchPersonalizedTemplateWithCategoryModel:(id)a0 completion:(id /* block */)a1;
- (void)fetchPersonalizedRecommendTextTemplateWithPannelName:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)clean;

@end
