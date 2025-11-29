@class NSError;

@interface TXCVideoCaptureError : NSObject

@property (class, readonly) NSError *noDevice;
@property (class, readonly) NSError *unauthorized;
@property (class, readonly) NSError *captureFrameFailed;
@property (class, readonly) NSError *screenCaptureStartFailed;
@property (class, readonly) NSError *screenInterrupted;

+ (id)errorWithCode:(long long)a0;

@end
