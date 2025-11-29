@interface AWEIMCleanupHelper : NSObject

+ (id)sharedInstance;

- (id)msgDBWalSize:(id)a0;
- (double)dbWalSizeWithType:(unsigned long long)a0;
- (BOOL)cleanup;
- (void)setup;

@end
