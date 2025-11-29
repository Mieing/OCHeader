@class IESLLOriginalAdModel, IESLLUserModel, IESLLAnchorInfoModel, IESLLPOIInfoModel, IESLLFakeHorizontalInfo, IESLLAwemeStatisticsModel, IESLLIndirectPOIInfoModel, NSString, IESLLRelationDynamicLabel, NSArray, NSNumber, IESLLVideoModel, UIImage;

@interface IESLLAwemeModel : IESLLifeBaseApiModel

@property (retain, nonatomic) IESLLOriginalAdModel *originAdInfo;
@property (copy, nonatomic) NSString *distance;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) IESLLVideoModel *video;
@property (retain, nonatomic) IESLLPOIInfoModel *poiInfo;
@property (nonatomic) long long awemeType;
@property (retain, nonatomic) IESLLUserModel *author;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) long long publishWay;
@property (retain, nonatomic) IESLLFakeHorizontalInfo *fakeHorizontalInfo;
@property (retain, nonatomic) IESLLAnchorInfoModel *anchorInfo;
@property (nonatomic) BOOL isOGCVideo;
@property (nonatomic) BOOL isAds;
@property (retain, nonatomic) NSArray *images;
@property (nonatomic) BOOL hasPreloadDetailImage;
@property (retain, nonatomic) IESLLAwemeStatisticsModel *statistics;
@property (retain, nonatomic) NSNumber *createTime;
@property (retain, nonatomic) NSArray *standardClassifyBarArray;
@property (copy, nonatomic) NSString *cityCode;
@property (readonly, nonatomic) IESLLIndirectPOIInfoModel *indirectPoiInfo;
@property (retain, nonatomic) IESLLRelationDynamicLabel *relationLabel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *productGenreInfoExtra;

+ (id)videoJSONTransformer;
+ (id /* block */)isEqualBlock;
+ (id)fakeHorizontalInfoJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)staticticsJSONTransformer;
+ (id)awemeTypeJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)anchorInfoJSONTransformer;
+ (id)standardClassifyBarArrayJSONTransformer;
+ (id)aweCommerce_subModelPropertyKey;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (BOOL)isDouPlusVideo;
- (void).cxx_destruct;
- (id)init;

@end
