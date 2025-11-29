@class TablePageData, BaseResponse;

@interface GetReceiptAssisPluginResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) TablePageData *pluginPage;

+ (void)initialize;

@end
