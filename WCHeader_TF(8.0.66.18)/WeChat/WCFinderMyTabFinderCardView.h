@class WCFinderMyTabFinderCardWordingView, WCFinderPersonalCenterPostActionView, UIView, WCFinderPersonalCenterContactView;
@protocol WCFinderPersonalCenterCameraActionHandle, WCFinderPersonalCenterLiveActionHandle, WCFinderMyTabFinderCardViewDelegate;

@interface WCFinderMyTabFinderCardView : UIView

@property (retain, nonatomic) WCFinderPersonalCenterContactView *contactView;
@property (retain, nonatomic) UIView *arrangeBottomLine;
@property (retain, nonatomic) WCFinderPersonalCenterPostActionView *actionView;
@property (retain, nonatomic) UIView *postSeparatorLine;
@property (retain, nonatomic) WCFinderMyTabFinderCardWordingView *wordingView;
@property (weak, nonatomic) id<WCFinderMyTabFinderCardViewDelegate> delegate;
@property (retain, nonatomic) id<WCFinderPersonalCenterCameraActionHandle> cameraHandle;
@property (retain, nonatomic) id<WCFinderPersonalCenterLiveActionHandle> liveHandle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeBottomLine;
- (id)makePostSeparatorLine;
- (id)makeWordingView;
- (void)_layoutElements;
- (void)layoutSubviews;
- (BOOL)update:(id)a0 wording:(id)a1 reportInfo:(id)a2;
- (void)onTapWordingView;
- (void)_onClickContact;
- (void).cxx_destruct;

@end
