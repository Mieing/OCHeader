@class IESLiveInteractionLocalPreviewCapture;

@interface IESLiveMultiKTVVideoSingModePreviewView : UIView

@property (retain, nonatomic) IESLiveInteractionLocalPreviewCapture *previewCaputre;

- (void)p_switchCameraSource;
- (void)p_setupViews;
- (void)p_confirm;
- (id)initWithPreviewCapture:(id)a0 diContext:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
