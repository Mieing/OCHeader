@class NSString, BaseResponse;

@interface GetLandpageSmartPhoneResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *fullNumber;
@property (retain, nonatomic) NSString *dialId;

+ (void)initialize;

@end
