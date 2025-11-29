@class NSString, NSMutableArray;

@interface PoiIntro : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *branchName;
@property (nonatomic) float price;
@property (retain, nonatomic) NSString *introduction;
@property (retain, nonatomic) NSString *recommend;
@property (retain, nonatomic) NSString *special;
@property (retain, nonatomic) NSString *traffic;
@property (retain, nonatomic) NSString *phone;
@property (retain, nonatomic) NSString *photoListUrl;
@property (retain, nonatomic) NSString *detailUrl;
@property (retain, nonatomic) NSString *openTime;
@property (nonatomic) float popular;
@property (nonatomic) int quality;
@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSMutableArray *recommendCategories;
@property (retain, nonatomic) NSString *priceStr;

+ (void)initialize;

@end
