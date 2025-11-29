@interface AWEIMMessageEmoticonReplyPendantPresenter : AWEIMUIViewPresenter

@property (copy, nonatomic) id /* block */ didClickReplyView;
@property (copy, nonatomic) id /* block */ didClickReplyViewMoreUser;
@property (copy, nonatomic) id /* block */ didClickReplyViewUser;

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void)willUnBindView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFit:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isMeasurementRequired;
- (id)createEmojiReplyViewWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
