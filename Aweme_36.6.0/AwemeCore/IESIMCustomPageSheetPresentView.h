@class UIViewController;
@protocol IESIMCustomPageSheetPresentViewDelegate, IESIMCustomModalTransitionVCProtocol;

@interface IESIMCustomPageSheetPresentView : UIView

@property (nonatomic) struct CGSize { double width; double height; } maskLayerSize;
@property (weak, nonatomic) UIViewController<IESIMCustomModalTransitionVCProtocol> *presentedViewController;
@property (weak, nonatomic) id<IESIMCustomPageSheetPresentViewDelegate> delegate;
@property (nonatomic) double cornerRadius;

- (BOOL)__presentedVCUserAutoLayout;
- (void).cxx_destruct;
- (void)addSubview:(id)a0;
- (void)layoutSubviews;
- (id)initWithPresentedViewController:(id)a0;

@end
