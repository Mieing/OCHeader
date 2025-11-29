@class NSString;

@interface KryptonDefaultMediaRecorderDelegateImpl : NSObject <KryptonDefaultMediaRecorderDelegate> {
    NSString *_temporaryDirectory;
}

- (id)getVideoPathInfo:(id)a0 isClip:(BOOL)a1;
- (id)getVideoDirectory:(id)a0 isClip:(BOOL)a1;
- (long long)getVideoFileManagementPolicy;
- (id)initWithTemporaryDirectory:(id)a0;
- (void).cxx_destruct;

@end
