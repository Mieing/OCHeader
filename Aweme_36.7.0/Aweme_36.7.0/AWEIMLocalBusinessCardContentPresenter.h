@class AWEIMUILabelPresenter, AWEIMWebImageViewPresenter;

@interface AWEIMLocalBusinessCardContentPresenter : AWEIMGestureUIViewPresenter

@property (retain, nonatomic) AWEIMUILabelPresenter *titleLabel;
@property (retain, nonatomic) AWEIMUILabelPresenter *subTitleLabel;
@property (retain, nonatomic) AWEIMWebImageViewPresenter *avatarImageView;

- (void)didReceiveProps:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
