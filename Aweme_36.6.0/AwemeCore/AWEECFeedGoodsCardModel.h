@class NSString, NSArray, AWEURLModel;

@interface AWEECFeedGoodsCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *themeUrl;
@property (retain, nonatomic) NSArray *productList;
@property (copy, nonatomic) NSString *bgmUrl;
@property (copy, nonatomic) NSString *bgmVid;
@property (retain, nonatomic) NSArray *bgmTransitionTime;
@property (copy, nonatomic) NSString *mallButtonUrl;
@property (retain, nonatomic) AWEURLModel *backgroundImageUrl;
@property (nonatomic) long long awemeType;
@property (copy, nonatomic) NSString *bussinessId;
@property (copy, nonatomic) NSString *trendId;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *mallButtonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productListJSONTransformer;
+ (id)backgroundImageUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
