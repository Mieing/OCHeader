@class NSString, FinderWindowProductInfo_DetailPage;

@interface FinderGetWindowProductProfileCardInfoResponse_SimpleProduct : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *imgUrl;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) FinderWindowProductInfo_DetailPage *fullPage;

+ (void)initialize;

@end
