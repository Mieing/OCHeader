@class NSString, CMMotionManager;
@protocol EnhanceTranslatingDelegate;

@interface EnhanceTranslatingLogic : NSObject <IOCRTransMgrExt>

@property (retain, nonatomic) CMMotionManager *motionManager;
@property (nonatomic) BOOL isScannerValid;
@property (nonatomic) BOOL isOldStyle;
@property (nonatomic) unsigned long long preparedTimestamp;
@property (nonatomic) unsigned long long detectFailTimestamp;
@property (weak, nonatomic) id<EnhanceTranslatingDelegate> delegate;
@property (nonatomic) BOOL isDetectorWorking;
@property (nonatomic) unsigned long long sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)prepareWithDelay:(double)a0 reset:(BOOL)a1;
- (void)invalidate;
- (void)scanningImage:(id)a0 cameraRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)isMotionStable;
- (void)makeSoundEffect;
- (void)onDetectDocumentArea:(unsigned long long)a0 vetrices:(id)a1 docImg:(id)a2 originImg:(id)a3;
- (void).cxx_destruct;

@end
