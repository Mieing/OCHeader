@class ApplyResponse_ResponseData, NSMutableDictionary, IESLiveAioLinkStateTransition, ApplyParams, NSString;

@interface IESLiveAioLinkApplyParamsAndResultData : IESLivePBBaseMessage

@property (retain, nonatomic) ApplyResponse_ResponseData *response;
@property (nonatomic) BOOL hasResponse;
@property (retain, nonatomic) ApplyParams *requestParams;
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
