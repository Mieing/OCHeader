@class WxaAppBaseResponse, NSString, NSMutableArray, BaseResponse;

@interface WxaAppGetShareInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *shareInfo;
@property (retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse;
@property (retain, nonatomic) NSString *signaturePlatformXml;

+ (void)initialize;

@end
