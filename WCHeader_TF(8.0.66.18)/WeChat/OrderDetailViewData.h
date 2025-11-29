@class PriceAndFavorViewData, NSString, TextViewData, NSMutableArray;

@interface OrderDetailViewData : WXPBGeneratedMessage

@property (retain, nonatomic) PriceAndFavorViewData *priceAndFavor;
@property (retain, nonatomic) NSMutableArray *otherDetail;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) TextViewData *footerText;

+ (void)initialize;

@end
