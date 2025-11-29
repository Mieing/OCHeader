@class IESLiveAioLinkStateTransition, NSMutableDictionary, NSString, IESLiveLinkMicCancelResponse_ResponseData, IESLiveLinkMicCancelParams;

@interface IESLiveAioLinkCancelParamsAndResultData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicCancelResponse_ResponseData *response;
@property (nonatomic) BOOL hasResponse;
@property (retain, nonatomic) IESLiveLinkMicCancelParams *requestParams;
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
