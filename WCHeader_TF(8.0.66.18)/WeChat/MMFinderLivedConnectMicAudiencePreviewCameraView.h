@class NSString, UIImageView, MMFinderLiveTaskId, UIView;

@interface MMFinderLivedConnectMicAudiencePreviewCameraView : UIView <MMLiveTrtcRenderingNotificationDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *activeRenderTargetView;
@property (retain, nonatomic) UIImageView *passivePreviewView;
@property (nonatomic) BOOL activeMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clearArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 activeMode:(BOOL)a1;
- (void)layoutSubviews;
- (void)onLiveTask:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 localRenderFlipX:(BOOL)a2;
- (void)initializeComponents;
- (id)liveTask;
- (void).cxx_destruct;

@end
