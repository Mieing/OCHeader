@interface CSJRenderModel : NSObject <NSCoding>

@property (nonatomic) long long renderSequence;
@property (nonatomic) long long backupRenderControl;
@property (nonatomic) long long renderThread;
@property (nonatomic) long long reserveTime;
@property (nonatomic) long long retryEnable;
@property (nonatomic) float retryTimeout;

- (BOOL)enableRetry;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
