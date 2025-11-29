@protocol ACCLoadingViewProtocol;

@interface ACCPropPickerLoadingView : AWEStickerPickerOverlayView

@property (retain, nonatomic) id<ACCLoadingViewProtocol> loadingView;

- (void)showOnView:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;

@end
