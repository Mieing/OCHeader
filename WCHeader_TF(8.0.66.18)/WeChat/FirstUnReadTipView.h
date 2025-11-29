@protocol FirstUnReadTipViewDelegate;

@interface FirstUnReadTipView : MMUIView

@property (weak, nonatomic) id<FirstUnReadTipViewDelegate> delegate;

+ (id)showTipWithDelegate:(id)a0 parentView:(id)a1 content:(id)a2;

- (id)init;
- (void)initView;
- (void)performBgAction;
- (void)setContentHighlighted;
- (void)setContentNormal;
- (void).cxx_destruct;

@end
