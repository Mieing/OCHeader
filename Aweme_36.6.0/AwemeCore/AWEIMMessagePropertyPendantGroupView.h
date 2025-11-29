@class YYLabel, NSString, UIImageView, UIView, AWEIMMessageEmoticonReplyViewModel, UIButton;
@protocol AWEIMMessagePropertyPendantGroupViewDelegate;

@interface AWEIMMessagePropertyPendantGroupView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIButton *followPropertyButton;
@property (retain, nonatomic) UIImageView *emoticonView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) AWEIMMessageEmoticonReplyViewModel *viewModel;
@property (readonly, nonatomic) UIView *dotView;
@property (weak, nonatomic) id<AWEIMMessagePropertyPendantGroupViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)longPressGesHandler:(id)a0;
- (id)p_backgroundColor;
- (void)renderWithModel:(id)a0 wrapped:(BOOL)a1 isLightCameraMsg:(BOOL)a2 sendFromMe:(BOOL)a3;
- (void)updateBGColor:(id)a0 wrapped:(BOOL)a1;
- (id)bgHighlightColor;
- (void)followPropertyButtonPressed:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearContent;

@end
