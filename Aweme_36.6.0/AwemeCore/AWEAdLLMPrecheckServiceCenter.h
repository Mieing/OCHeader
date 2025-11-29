@class NSString, NSMutableDictionary;

@interface AWEAdLLMPrecheckServiceCenter : HTSService <AWEAdLLMPrecheckServiceCenter>

@property (retain, nonatomic) NSMutableDictionary *center;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)serviceBySceneName:(id)a0;
- (void).cxx_destruct;

@end
