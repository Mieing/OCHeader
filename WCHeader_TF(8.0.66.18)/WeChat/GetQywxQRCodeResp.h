@class NSString, BaseResponse;

@interface GetQywxQRCodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *backup;
@property (retain, nonatomic) NSString *componentId;
@property (retain, nonatomic) NSString *snsAid;

+ (void)initialize;

@end
