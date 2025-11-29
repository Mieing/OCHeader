@class PermitParams, NSMutableDictionary, IESLiveAioLinkStateTransition, NSString, PermitResponse_ResponseData;

@interface IESLiveAioLinkPermitParamsAndResultData : IESLivePBBaseMessage

@property (retain, nonatomic) PermitResponse_ResponseData *response;
@property (nonatomic) BOOL hasResponse;
@property (retain, nonatomic) PermitParams *requestParams;
@property (nonatomic) BOOL hasRequestParams;
@property (retain, nonatomic) NSMutableDictionary *clientParams;
@property (readonly, nonatomic) unsigned long long clientParams_Count;
@property (retain, nonatomic) IESLiveAioLinkStateTransition *stateTransition;
@property (nonatomic) BOOL hasStateTransition;
@property (nonatomic) long long startTs;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMessage;

+ (id)descriptor;

@end
