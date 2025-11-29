@class UIViewController;
@protocol RTVPageSheetViewControllerProtocol;

@interface RTVPageSheetPresentView : UIView

@property (nonatomic) struct CGSize { double width; double height; } maskLayerSize;
@property (weak, nonatomic) UIViewController<RTVPageSheetViewControllerProtocol> *presentedViewController;
@property (nonatomic) double cornerRadius;

- (BOOL)__presentedVCUserAutoLayout;
- (void).cxx_destruct;
- (void)addSubview:(id)a0;
- (void)layoutSubviews;
- (id)initWithPresentedViewController:(id)a0;

@end
