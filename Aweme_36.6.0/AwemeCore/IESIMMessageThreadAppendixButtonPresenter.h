@class IESIMMessageThreadAppendixLeftIconPresenter, AWEIMUIImageViewPresenter, AWEIMYYLabelPresenter;

@interface IESIMMessageThreadAppendixButtonPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) IESIMMessageThreadAppendixLeftIconPresenter *leftIcon;
@property (retain, nonatomic) AWEIMYYLabelPresenter *content;
@property (retain, nonatomic) AWEIMUIImageViewPresenter *rightIcon;

- (void)didReceiveProps:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
