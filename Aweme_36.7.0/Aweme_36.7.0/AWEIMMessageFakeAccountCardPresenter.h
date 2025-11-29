@class AWEIMUIImageViewPresenter, AWEIMUIViewPresenter;

@interface AWEIMMessageFakeAccountCardPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMUIImageViewPresenter *fakeAvatar;
@property (retain, nonatomic) AWEIMUIViewPresenter *fakeNameBox;
@property (retain, nonatomic) AWEIMUIViewPresenter *fakeIntroBox;
@property (retain, nonatomic) AWEIMUIViewPresenter *fakeSecondIntroBox;

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void)didReceiveProps:(id)a0;
- (void)updateSubpresenterProps;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
