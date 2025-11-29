@class UIImageView, UILabel;

@interface ACCMusicReplaceNoVoiceTipView : UIView

@property (retain, nonatomic) UIImageView *noticeIcon;
@property (retain, nonatomic) UILabel *noticeLabel;

+ (double)tipViewHeight;

- (void)setupNoticeIcon;
- (void)setupNoticeLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
