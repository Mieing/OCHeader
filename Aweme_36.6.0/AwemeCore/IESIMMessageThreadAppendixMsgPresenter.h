@class AWEIMUIImageViewPresenter, AWEIMYYLabelPresenter;

@interface IESIMMessageThreadAppendixMsgPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMUIImageViewPresenter *avatar;
@property (retain, nonatomic) AWEIMYYLabelPresenter *messageContent;

- (void)didReceiveProps:(id)a0;
- (void).cxx_destruct;
- (void)setIdentifier:(id)a0;
- (id)initWithContext:(id)a0;

@end
