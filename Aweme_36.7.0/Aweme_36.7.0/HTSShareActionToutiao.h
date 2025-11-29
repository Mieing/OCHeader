@class NSString;

@interface HTSShareActionToutiao : NSObject <WeitoutiaoShareApiDelegate, HTSShareAction>

@property (copy, nonatomic) id /* block */ shareCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPlatformAvailable:(long long)a0;
- (void)onResponse:(id)a0;
- (void)shareWithModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)handleOpenURL:(id)a0;

@end
