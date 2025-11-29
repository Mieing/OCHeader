@interface AWEXPlayOpenServiceHttpManager : NSObject

@property (nonatomic) unsigned long long source;

+ (id)sharedInstance;

- (void)hmdTrackServiceName:(id)a0 duration:(double)a1 category:(id)a2;
- (void)requestRealnameAuthWithIdentityName:(id)a0 identityNumber:(id)a1 callback:(id /* block */)a2;
- (void)requestRealnameAuthWithType:(long long)a0 authCode:(id)a1 callback:(id /* block */)a2;

@end
