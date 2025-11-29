@class AWEIMUILabelPresenter;

@interface AWEIMFeedExternalRefCommentComponent : AWEIMFlexComponent

@property (retain, nonatomic) AWEIMUILabelPresenter *commentLabelPresenter;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)configCommentPresenter;
- (void)p_updateCommentLabel:(BOOL)a0 message:(id)a1;
- (void)updateCommentLabelWithText:(id)a0 contentType:(long long)a1 message:(id)a2;
- (void).cxx_destruct;

@end
