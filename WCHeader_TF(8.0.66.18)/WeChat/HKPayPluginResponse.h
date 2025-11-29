@class TablePageData, NSString, BaseResponse;

@interface HKPayPluginResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) TablePageData *pluginPage;
@property (retain, nonatomic) NSString *disableHkWalletUrl;
@property (retain, nonatomic) NSString *supportCenterUrl;

+ (void)initialize;

@end
