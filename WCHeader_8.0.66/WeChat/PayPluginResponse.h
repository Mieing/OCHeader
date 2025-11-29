@class TablePageData, BaseResponse;

@interface PayPluginResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) TablePageData *pluginPage;

+ (void)initialize;

@end
