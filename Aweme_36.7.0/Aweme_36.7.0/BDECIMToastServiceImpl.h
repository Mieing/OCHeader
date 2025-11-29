@class NSString;

@interface BDECIMToastServiceImpl : NSObject <BDECIMToastService_I>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showToast:(id)a0;
- (void)showSuccess:(id)a0;

@end
