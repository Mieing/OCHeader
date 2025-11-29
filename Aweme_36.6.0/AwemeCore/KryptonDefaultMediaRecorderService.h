@class NSString;

@interface KryptonDefaultMediaRecorderService : NSObject <KryptonMediaRecorderService> {
    NSString *_temporaryDirectory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createMediaRecorder;
- (void).cxx_destruct;
- (void)setTemporaryDirectory:(id)a0;

@end
