@class NSString, FinderWindowProductInfo_DetailPage;

@interface FinderLiveFlashSaleProductInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *headimgUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *flashIcon;
@property (nonatomic) unsigned long long price;
@property (retain, nonatomic) NSString *flashWording;
@property (nonatomic) unsigned int endTime;
@property (retain, nonatomic) FinderWindowProductInfo_DetailPage *path;

+ (void)initialize;

@end
