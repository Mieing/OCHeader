@class NSString, BaseResponse;

@interface GetFaceContractStatusResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned int contractStatus;
@property (retain, nonatomic) NSString *contractHint;
@property (retain, nonatomic) NSString *contractUrl;
@property (retain, nonatomic) NSString *contractTitle;
@property (retain, nonatomic) NSString *contractDesc;

+ (void)initialize;

@end
