@class UIImageView, UILabel, MMBGMSelectedButton;
@protocol MMBGMChooseFeedListSelectedBarDelegate;

@interface MMBGMChooseFeedListSelectedBar : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *feedDescView;
@property (retain, nonatomic) UILabel *reccommentReasonView;
@property (retain, nonatomic) MMBGMSelectedButton *selectedButton;
@property (weak, nonatomic) id<MMBGMChooseFeedListSelectedBarDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (double)updateWithContentVM:(id)a0 width:(double)a1 highLightText:(id)a2;
- (void)setBtnState:(unsigned long long)a0;
- (double)getDescMaxWidthWithBarWidth:(double)a0;
- (void)layoutSubviews;
- (void)onClickSelectedButton:(id)a0;
- (void).cxx_destruct;

@end
