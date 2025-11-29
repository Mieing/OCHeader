@class CAGradientLayer, NSArray, NSString, UIView, CECMomentTextInputContainerView;
@protocol CECMomentTextContainerViewDelegate;

@interface CECMomentTextContainerView : UIView <CECMomentTextAreaDelegate>

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (copy, nonatomic) NSArray *colorPairs;
@property (weak, nonatomic) id<CECMomentTextContainerViewDelegate> delegate;
@property (retain, nonatomic) CECMomentTextInputContainerView *inputContainerView;
@property (retain, nonatomic) UIView *animationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelInputWithNeedClearText:(BOOL)a0;
- (void)immerseAudioRecordAnimation:(BOOL)a0;
- (void)textAreaDidBeginEditing:(id)a0;
- (void)textAreaDidEndEditing:(id)a0;
- (void)textAreaTextDidChange:(id)a0;
- (double)contentViewBottomHeight;
- (void).cxx_destruct;
- (void)showKeyboard;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
