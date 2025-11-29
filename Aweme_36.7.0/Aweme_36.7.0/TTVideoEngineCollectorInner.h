@interface TTVideoEngineCollectorInner : NSObject

@property (nonatomic) long long mPlayConsumedSize;

+ (id)sharedInstance;

- (void)updatePlayConsumedSize:(long long)a0;
- (long long)getPlayConsumedSize;
- (id)init;

@end
