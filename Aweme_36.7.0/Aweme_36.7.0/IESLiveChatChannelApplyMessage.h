@class UITextView, HTSEventContext, IESLivePSComponentConfigModel, NSAttributedString;

@interface IESLiveChatChannelApplyMessage : UIView <IESLivePSComponentViewProtocol>

@property (retain, nonatomic) UITextView *contentTextView;
@property (weak, nonatomic) id clickTarget;
@property (nonatomic) SEL selector;
@property (copy, nonatomic) NSAttributedString *contentMessage;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadView;
- (void)addTarget:(id)a0 selector:(SEL)a1;
- (void)singleTap:(id)a0;

@end
