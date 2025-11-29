@class SingleLineTextViewData, NSString;

@interface PriceAndFavorViewData : WXPBGeneratedMessage

@property (nonatomic) BOOL isShowPrice;
@property (retain, nonatomic) SingleLineTextViewData *price;
@property (retain, nonatomic) SingleLineTextViewData *favor;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) NSString *originalPrice;

+ (void)initialize;

@end
