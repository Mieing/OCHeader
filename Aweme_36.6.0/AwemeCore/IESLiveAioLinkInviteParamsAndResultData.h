@class IESLiveLinkmicInviteParams, NSMutableDictionary, IESLiveLinkmicInviteResponse_ResponseData, IESLiveAioLinkStateTransition, NSString;

@interface IESLiveAioLinkInviteParamsAndResultData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkmicInviteResponse_ResponseData *response;
@property (nonatomic) BOOL hasResponse;
@property (retain, nonatomic) IESLiveLinkmicInviteParams *requestParams;
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
