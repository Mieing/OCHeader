@class NSString, GPBStringBoolDictionary;

@interface SwitchChannelInviteResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) GPBStringBoolDictionary *notAllowMap;
@property (readonly, nonatomic) unsigned long long notAllowMap_Count;
@property (nonatomic) BOOL isFailure;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) long long waitSec;

+ (id)descriptor;

@end
