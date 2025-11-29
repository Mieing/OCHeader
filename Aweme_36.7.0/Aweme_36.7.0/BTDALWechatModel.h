@class NSString, NSNumber;

@interface BTDALWechatModel : BTDALModel

@property (copy, nonatomic) NSString *advID;
@property (copy, nonatomic) NSString *siteID;
@property (copy, nonatomic) NSString *pageUrl;
@property (copy, nonatomic) NSString *wechatMiniAppSdk;
@property (copy, nonatomic) NSString *wechatMiniAppLink;
@property (retain, nonatomic) NSNumber *wechatSkipType;
@property (nonatomic) unsigned long long wechatOpenMethod;
@property (nonatomic) long long networkTimeout;
@property (retain, nonatomic) NSNumber *wechatAppType;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *path;

- (void).cxx_destruct;

@end
