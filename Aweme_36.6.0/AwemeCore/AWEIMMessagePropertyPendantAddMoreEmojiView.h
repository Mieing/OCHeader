@class UIImageView, NSString;
@protocol AWEIMMessagePropertyPendantAddMoreEmojiViewDelegate;

@interface AWEIMMessagePropertyPendantAddMoreEmojiView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIImageView *addMoreEmojiImageView;
@property (nonatomic) BOOL isPanelShow;
@property (weak, nonatomic) id<AWEIMMessagePropertyPendantAddMoreEmojiViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupAccessibility;
- (void)p_setupTapGesture;
- (void)renderWithModel:(id)a0 wrapped:(BOOL)a1 isLightCameraMsg:(BOOL)a2 sendFromMe:(BOOL)a3;
- (void)handleStatusChange:(id)a0;
- (void)notifyDelegateWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)updateBGColor:(id)a0 wrapped:(BOOL)a1;
- (void)p_setupUI;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;

@end
