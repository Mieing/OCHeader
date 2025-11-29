@class NSString;

@interface PoiDeal : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *description;
@property (nonatomic) float currentPrice;
@property (nonatomic) float listPrice;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *photoUrl;

+ (void)initialize;

@end
