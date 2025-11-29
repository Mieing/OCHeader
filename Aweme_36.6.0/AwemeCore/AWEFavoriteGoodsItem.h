@class AWEFavoriteTagInfoItem, NSString, AWEFavoriteGrouponItem, NSNumber, AWEURLModel;

@interface AWEFavoriteGoodsItem : AWEBaseApiModel <AWEGoodsBasicModelProtocol>

@property (nonatomic) BOOL showCommentPopup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *productID;
@property (nonatomic) long long productType;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) NSNumber *price;
@property (retain, nonatomic) NSNumber *favoriteCount;
@property (nonatomic) BOOL onSale;
@property (nonatomic) long long itemStatus;
@property (copy, nonatomic) NSString *authorSID;
@property (retain, nonatomic) NSString *promotionSource;
@property (copy, nonatomic) NSString *metaParamsString;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *score;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) AWEFavoriteGrouponItem *grouponInfo;
@property (retain, nonatomic) AWEFavoriteTagInfoItem *tagInfo;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) BOOL onDeleting;

+ (id)coverURLJSONTransformer;
+ (id)grouponInfoJSONTransformer;
+ (id)tagInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)internalFlowRecommendType;
- (id)reliableImages;
- (id)sales;
- (BOOL)showInternalFlow;
- (id)personalInfosJSONStr;
- (void).cxx_destruct;
- (id)longTitle;

@end
