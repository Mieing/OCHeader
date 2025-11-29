@class NSString, BaseResponse;

@interface IssueNFCCardResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *enPassData;
@property (retain, nonatomic) NSString *ephemeralPublicKey;
@property (retain, nonatomic) NSString *activationData;

+ (void)initialize;

@end
