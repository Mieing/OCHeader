@class BaseResponse, NetworkSectResp, AcctSectResp, AxAuthSecRespList, HostAlgoList, AuthSectResp;

@interface UnifyAuthResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int unifyAuthSectFlag;
@property (retain, nonatomic) AuthSectResp *authSectResp;
@property (retain, nonatomic) AcctSectResp *acctSectResp;
@property (retain, nonatomic) NetworkSectResp *networkSectResp;
@property (retain, nonatomic) AxAuthSecRespList *axAuthSecRespList;
@property (retain, nonatomic) HostAlgoList *hostAlgoListResp;

+ (void)initialize;

- (void)setHostAlgoListResp:(id)a0;
- (id)hostAlgoListResp;
- (void)setAxAuthSecRespList:(id)a0;
- (id)axAuthSecRespList;
- (void)setNetworkSectResp:(id)a0;
- (id)networkSectResp;
- (void)setAcctSectResp:(id)a0;
- (id)acctSectResp;
- (void)setAuthSectResp:(id)a0;
- (id)authSectResp;
- (void)setUnifyAuthSectFlag:(unsigned int)a0;
- (unsigned int)unifyAuthSectFlag;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
