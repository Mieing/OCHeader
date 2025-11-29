@class NSString, NSDictionary;

@interface TIMXOfflineMsgPullerContext : NSObject <TIMXOfflineMsgPullerContextProtocol>

@property (nonatomic) long long reason;
@property (copy, nonatomic) NSString *originSource;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) BOOL shouldPullConvVersion;
@property (nonatomic) BOOL shouldPullThreadVersion;
@property (nonatomic) BOOL shouldPullStrangerVersion;
@property (nonatomic) BOOL shouldPullCmdVersion;
@property (nonatomic) BOOL shouldPullCmdChainV2;
@property (nonatomic) BOOL shouldPullReadVersion;
@property (nonatomic) BOOL shouldPullThreadReadVersion;
@property (nonatomic) BOOL shouldPullConsultVersion;
@property (nonatomic) BOOL needRecentConvReadInfo;
@property (nonatomic) long long retryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReason:(long long)a0 originSource:(id)a1;
- (id)initWithReasonV2:(long long)a0 originSource:(id)a1;
- (void).cxx_destruct;

@end
