@class EcProductCard, NSAttributedString;

@interface ECProductCardViewModel : NSObject

@property (nonatomic) long long viewWidth;
@property (nonatomic) long long overviewHeight;
@property (readonly, nonatomic) EcProductCard *cardModel;
@property (readonly, nonatomic) NSAttributedString *attrTitle;
@property (readonly, nonatomic) long long heightTitle;
@property (readonly, nonatomic) NSAttributedString *attrPrice;
@property (readonly, nonatomic) NSAttributedString *attrPriceForOverview;
@property (readonly, nonatomic) NSAttributedString *attrSales;
@property (readonly, nonatomic) BOOL hasProductTags;
@property (readonly, nonatomic) BOOL hasFriendsTags;

+ (id)prodcutTagsConfig;
+ (id)friendsTagsConfig;
+ (id)convertFromCardModelList:(id)a0;

- (id)initWithCardModel:(id)a0;
- (void)_calcuteTitleHeight;
- (void)_resetTagsStatus;
- (void)_resetPriceAndSales;
- (void).cxx_destruct;

@end
