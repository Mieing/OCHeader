@class UILabel;

@interface IESECLiveReplaySubtitleView : UIView

@property (retain, nonatomic) UILabel *subTitleLabel;

- (id)attributedStringWithText:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateTitle:(id)a0;

@end
