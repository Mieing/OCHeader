@class NSArray, IESLLPOIAlbumCategoryInfoModel, NSString;

@interface IESLLPOIAlbumDataModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSArray *tabInfo;
@property (retain, nonatomic) IESLLPOIAlbumCategoryInfoModel *categoryInfo;
@property (nonatomic) long long maxReportNumber;
@property (copy, nonatomic) NSString *photosReportSchema;
@property (copy, nonatomic) NSString *galleryHeaderLynxURL;
@property (copy, nonatomic) NSString *galleryBottomLynxURL;
@property (copy, nonatomic) NSString *bottomBarLynxURL;
@property (copy, nonatomic) NSString *bottomBarRawData;
@property (nonatomic) BOOL hideAlbumUploadButton;
@property (copy, nonatomic) NSArray *pageTypeInfo;
@property (copy, nonatomic) NSArray *videoPageModel;

+ (id)tabInfoJSONTransformer;
+ (id)pageTypeInfoJSONTransformer;
+ (id)videoPageModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
