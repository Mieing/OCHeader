@class NSString, BizLiteAppInfo, BaseResponse;

@interface OpenLiteAppByBusinessResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) BizLiteAppInfo *liteappInfo;
@property (retain, nonatomic) NSString *page;

+ (void)initialize;

@end
