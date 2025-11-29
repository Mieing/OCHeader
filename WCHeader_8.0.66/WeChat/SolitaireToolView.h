@class UIView;
@protocol SolitaireToolViewDelegate;

@interface SolitaireToolView : UIView

@property (retain, nonatomic) UIView *buttonContainerView;
@property (weak, nonatomic) id<SolitaireToolViewDelegate> delegate;

- (id)init;
- (void)initView;
- (id)getButtonTitle:(int)a0;
- (void)onClickItem:(id)a0;
- (id)getButtonImage:(int)a0;
- (id)getButtonHLImage:(int)a0;
- (void).cxx_destruct;

@end
