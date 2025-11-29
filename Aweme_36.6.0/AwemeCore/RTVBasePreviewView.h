@class UITapGestureRecognizer, NSString, RTVPreviewViewModel;
@protocol RTVBasePreviewViewDelegate;

@interface RTVBasePreviewView : UIView <RTVInteractionControllerObserver>

@property (retain, nonatomic) RTVPreviewViewModel *viewModel;
@property (retain, nonatomic) id viewContext;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<RTVBasePreviewViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (void)__createGestureRecognizer;
- (void)__onClicked;
- (void)viewDidClick;
- (void)willAdjustScale;
- (void)didAdjustScale;
- (void)transformChange:(id)a0;
- (void).cxx_destruct;

@end
