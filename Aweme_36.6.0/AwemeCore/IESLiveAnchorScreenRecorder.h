@class NSString, UIImage, UIView, LCScreenRecorder;

@interface IESLiveAnchorScreenRecorder : NSObject <LCScreenRecorderProtocol, IESLiveScreenRecorderProtocol>

@property (retain, nonatomic) LCScreenRecorder *screenRecorder;
@property (copy, nonatomic) id /* block */ completeHandle;
@property (weak, nonatomic) UIView *targetView;
@property (retain, nonatomic) NSString *outputPath;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) double scale;
@property (retain, nonatomic) UIImage *coverImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double seconds;

- (double)getFileSize:(id)a0;
- (void)screenRecorder:(id)a0 didRecordingFinished:(id)a1 error:(id)a2;
- (void)screenRecorder:(id)a0 didStatusChanged:(long long)a1;
- (id)initWithTargetView:(id)a0 completed:(id /* block */)a1 diContext:(id)a2;
- (void)updateTargetView:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (BOOL)isRecording;
- (void)stop;
- (void)start;
- (void)dealloc;
- (void)cancel;

@end
