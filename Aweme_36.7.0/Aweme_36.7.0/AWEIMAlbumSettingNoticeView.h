@class UILabel, UIButton, UIView;

@interface AWEIMAlbumSettingNoticeView : UIView

@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ onCloseClicked;

- (void)onCloseBtnClicked;
- (void)onLabelClicked;
- (void)p_trackChangeAccess;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end
