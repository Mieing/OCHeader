@class AWEIMUIImageViewPresenter, AWEIMUILabelPresenter, AWEIMGestureUIViewPresenter, AWEIMMultiAvatarsPresenter;

@interface AWEIMMessageNewComerReportPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMUILabelPresenter *welcomeTapLabel;
@property (retain, nonatomic) AWEIMUILabelPresenter *welcomeTitleLabel;
@property (retain, nonatomic) AWEIMUIImageViewPresenter *welcomeTapIcon;
@property (retain, nonatomic) AWEIMGestureUIViewPresenter *welcomeTapView;
@property (retain, nonatomic) AWEIMGestureUIViewPresenter *avatarTapView;
@property (retain, nonatomic) AWEIMMultiAvatarsPresenter *avatars;

- (void)didReceiveProps:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
