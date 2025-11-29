@class UIImageView, MMUILabel, UIButton;
@protocol MMWebLiveTitleViewDelegate;

@interface MMWebLiveTitleView : MMUIView

@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *liveImageView;
@property (retain, nonatomic) UIButton *titleButton;
@property (weak, nonatomic) id<MMWebLiveTitleViewDelegate> delegate;

- (id)init;
- (void)initView;
- (void)layoutSubviews;
- (void)onTitleViewClicked;
- (void).cxx_destruct;

@end
