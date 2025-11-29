@class AWEIMMediaPresenter, AWEIMUILabelPresenter, AWEIMUIViewPresenter;

@interface AWEIMCommentVideoPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMUIViewPresenter *line;
@property (retain, nonatomic) AWEIMMediaPresenter *media;
@property (retain, nonatomic) AWEIMUILabelPresenter *invisibleStatusLabel;

- (void)didReceiveProps:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
