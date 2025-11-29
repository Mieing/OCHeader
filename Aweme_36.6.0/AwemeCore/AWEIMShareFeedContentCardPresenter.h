@class AWEIMFeedInfoCardPresenter, AWEIMUILabelPresenter, AWEIMYYLabelPresenter, AWEIMBDImageViewPresenter, AWEIMUIViewPresenter;

@interface AWEIMShareFeedContentCardPresenter : AWEIMGestureUIViewPresenter

@property (retain, nonatomic) AWEIMUILabelPresenter *topLabel;
@property (retain, nonatomic) AWEIMYYLabelPresenter *contentLabel;
@property (retain, nonatomic) AWEIMBDImageViewPresenter *contentImage;
@property (retain, nonatomic) AWEIMUIViewPresenter *line;
@property (retain, nonatomic) AWEIMFeedInfoCardPresenter *feedCard;

- (void)didReceiveProps:(id)a0;
- (void)stopAnimationIfNeed;
- (void)startAnimationIfNeed;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
