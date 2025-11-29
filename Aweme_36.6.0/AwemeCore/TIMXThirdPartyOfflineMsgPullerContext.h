@class NSString, NSDictionary;

@interface TIMXThirdPartyOfflineMsgPullerContext : NSObject <TIMXThirdPartyOfflineMsgPullerContextProtocol>

@property (nonatomic) long long reason;
@property (copy, nonatomic) NSString *originSource;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) long long retryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReason:(long long)a0 originSource:(id)a1;
- (void).cxx_destruct;

@end
