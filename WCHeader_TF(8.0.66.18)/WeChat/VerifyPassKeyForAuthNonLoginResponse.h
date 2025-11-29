@class NetworkSectResp, PassKeyLoginInfo, BaseResponse;

@interface VerifyPassKeyForAuthNonLoginResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) PassKeyLoginInfo *pwd;
@property (retain, nonatomic) NetworkSectResp *networkSectResp;
@property (nonatomic) unsigned int mmTlsControlBitFlag;

+ (void)initialize;

@end
