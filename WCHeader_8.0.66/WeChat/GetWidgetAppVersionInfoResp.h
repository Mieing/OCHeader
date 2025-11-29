@class NSMutableArray, BaseResponse;

@interface GetWidgetAppVersionInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *items;

+ (void)initialize;

@end
