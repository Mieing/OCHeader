@class AWEIMUIViewPresenter, AWEIMYYLabelPresenter;

@interface AWEIMMessageCombineSharePresenter : AWEIMGestureUIViewPresenter

@property (retain, nonatomic) AWEIMYYLabelPresenter *titlePresenter;
@property (retain, nonatomic) AWEIMYYLabelPresenter *contentPresenter;
@property (retain, nonatomic) AWEIMUIViewPresenter *linePresenter;
@property (retain, nonatomic) AWEIMYYLabelPresenter *messageCountPresenter;

- (void)didReceiveProps:(id)a0;
- (id)imageDisplayAttributedStringForProps:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
