@class NSString, FinderWxAppInfo, FinderLiveShopCustomerServiceInfo_FinderWeChatInfo;

@interface FinderLiveShopCustomerServiceInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int appType;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) FinderWxAppInfo *appInfo;
@property (retain, nonatomic) NSString *h5Url;
@property (retain, nonatomic) FinderLiveShopCustomerServiceInfo_FinderWeChatInfo *wecomInfo;

+ (void)initialize;

@end
