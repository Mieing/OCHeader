@class NSMutableArray;
@protocol TTBridgeAuthorization, BytedCertCameraDelegate, BytedCertTrackEventDelegate, BytedCertCloseResultDelegate, BytedCertNetDelegate, BytedCertMetaSecDelegate, BytedCertLoggerDelegate, BytedCertProgressDelegate, BytedCertUIDelegate;

@interface BytedCertInterface : NSObject

@property (weak, nonatomic) id<TTBridgeAuthorization> manager;
@property (retain, nonatomic) NSMutableArray *progressArray;
@property (weak, nonatomic) id<BytedCertCameraDelegate> bytedCertCameraDelegate;
@property (copy, nonatomic) id /* block */ bytedCertCameraCallback;
@property (weak, nonatomic) id<BytedCertTrackEventDelegate> BytedCertTrackEventDelegate;
@property (weak, nonatomic) id<BytedCertLoggerDelegate> bytedCertLoggerDelegate;
@property (weak, nonatomic) id<BytedCertNetDelegate> bytedCertNetDelegate;
@property (weak, nonatomic) id<BytedCertUIDelegate> bytedCertUIDelegate;
@property (weak, nonatomic) id<BytedCertCloseResultDelegate> bytedCertOnH5CloseDelegate;
@property (weak, nonatomic) id<BytedCertMetaSecDelegate> bytedCertMetaSecDelegate;
@property (weak, nonatomic) id<BytedCertProgressDelegate> bytedCertProgressDelegate;

+ (void)logWithInfo:(id)a0 params:(id)a1;
+ (void)logWithErrorInfo:(id)a0 params:(id)a1 error:(id)a2;
+ (id)sharedInstance;

- (void)setBytedCertCameraImage:(id)a0;
- (void)setBridgeAuthorization:(id)a0;
- (void)addProgressDelegate:(id)a0;
- (void)removeProgressDelegate:(id)a0;
- (id)progressDelegateArray;
- (void)updateAuthParams:(id)a0;
- (void).cxx_destruct;

@end
