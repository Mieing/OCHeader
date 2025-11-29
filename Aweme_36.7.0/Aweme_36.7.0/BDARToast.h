@interface BDARToast : NSObject

@property (nonatomic) long long tag;

+ (void)showToast:(id)a0;
+ (id)sharedInstance;

- (void)hideToast:(id)a0;
- (void)showToast:(id)a0;
- (id)init;

@end
