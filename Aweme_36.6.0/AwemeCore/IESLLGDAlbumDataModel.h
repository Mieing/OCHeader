@class NSArray, IESLLGDAlbumCategoryInfoModel, NSString;

@interface IESLLGDAlbumDataModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSArray *tabInfo;
@property (retain, nonatomic) IESLLGDAlbumCategoryInfoModel *categoryInfo;
@property (copy, nonatomic) NSString *previewHeaderLynxURL;
@property (copy, nonatomic) NSString *previewBottomLynxURL;
@property (copy, nonatomic) NSString *bottomBarLynxURL;
@property (copy, nonatomic) NSString *headerBarLynxURL;
@property (copy, nonatomic) NSString *bottomBarRawData;
@property (copy, nonatomic) NSString *headerBarRawData;

+ (id)tabInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
