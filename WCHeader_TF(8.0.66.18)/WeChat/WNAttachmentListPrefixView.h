@class UIButton, UILabel;

@interface WNAttachmentListPrefixView : WNAttachmentBaseView

@property (retain, nonatomic) UIButton *checkBtn;
@property (retain, nonatomic) UILabel *listLabel;

- (void)onClickObject;
- (void)layoutView;
- (void)checkBtnClicked;
- (void)updateCheck;
- (void).cxx_destruct;

@end
