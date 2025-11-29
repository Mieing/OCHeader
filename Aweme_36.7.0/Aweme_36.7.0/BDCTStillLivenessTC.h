@class FaceLiveModule, FaceLiveViewController;

@interface BDCTStillLivenessTC : LivenessTC {
    BOOL _isDetecting;
    long long _detectStartTime;
    long long _firstBestTime;
    BOOL _hasSuccess;
}

@property (retain, nonatomic) FaceLiveModule *faceliveInstance;
@property (weak, nonatomic) FaceLiveViewController *faceLiveViewController;

- (id)initWithVC:(id)a0;
- (int)setInitParams:(id)a0;
- (int)setParamsGeneral:(int)a0 value:(float)a1;
- (struct CGImage { } *)doFaceLive:(struct __CVBuffer { } *)a0 orient:(int)a1;
- (void)updateProgress:(float)a0 prompt:(id)a1 animated:(BOOL)a2;
- (void)setMaskRadiusRatio:(float)a0 offsetToCenterRatio:(float)a1;
- (void)reStart:(int)a0;
- (void)trackCancel;
- (void)viewDismiss;
- (int)getAlgoErrorCode;
- (id)getLivenessErrorTitle:(int)a0;
- (void).cxx_destruct;
- (BOOL)stop:(BOOL)a0;
- (BOOL)stop;
- (void)start;

@end
