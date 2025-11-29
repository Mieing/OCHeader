@class NSDictionary, NSString;

@interface IESLiveRequestPolicyDecisionServiceImp : NSObject <IESLiveRequestPolicyDecisionService>

@property (copy, nonatomic) NSDictionary *upLinkApiConfig;
@property (nonatomic) double timeOutMs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)initializeConfig;
- (BOOL)policyDecisionUseByteLinkAgentWithRequestModel:(id)a0 backUpIfNeeded:(id /* block */)a1;
- (void)executeApiUpLinkWithRequestModel:(id)a0 pathConfig:(id)a1 backUpIfNeeded:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
