@class WxaAppBaseResponse, NSMutableArray, BaseResponse;

@interface GetWxaDesktopEntranceResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse;
@property (retain, nonatomic) NSMutableArray *entranceInfo;

+ (void)initialize;

@end
