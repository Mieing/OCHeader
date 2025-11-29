@class UIImageView, MMUILabel, UIButton;
@protocol MMWebMProfileTitleViewDelegate;

@interface MMWebMProfileTitleView : MMUIView

@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *liveImageView;
@property (retain, nonatomic) UIButton *titleButton;
@property (weak, nonatomic) id<MMWebMProfileTitleViewDelegate> delegate;

- (id)init;
- (void)initView;
- (void)updateTitle:(id)a0;
- (void)updateLiveStatus:(BOOL)a0;
- (void)resetUIStatus;
- (void)layoutSubviews;
- (void)onTitleViewClicked:(id)a0;
- (double)titleLabelHorizonalOffset;
- (void).cxx_destruct;

@end
