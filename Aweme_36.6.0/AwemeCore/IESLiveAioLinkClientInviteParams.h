@class NSMutableDictionary, IESLiveLinkmicInviteParams;

@interface IESLiveAioLinkClientInviteParams : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableDictionary *serverExtraParams;
@property (readonly, nonatomic) unsigned long long serverExtraParams_Count;
@property (retain, nonatomic) IESLiveLinkmicInviteParams *requestParams;
@property (nonatomic) BOOL hasRequestParams;
@property (retain, nonatomic) NSMutableDictionary *clientParams;
@property (readonly, nonatomic) unsigned long long clientParams_Count;

+ (id)descriptor;

@end
