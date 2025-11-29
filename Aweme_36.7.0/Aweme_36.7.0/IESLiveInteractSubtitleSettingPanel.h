@class NSString, UIImageView, UISwitch, UILabel, UIButton;
@protocol IESLiveInteractSubtitleSettingPanelDelegate;

@interface IESLiveInteractSubtitleSettingPanel : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *leftSubtitleImage;
@property (retain, nonatomic) UIImageView *rightSubtitleImage;
@property (retain, nonatomic) UILabel *switchTitle;
@property (retain, nonatomic) UISwitch *subtitleSwitch;
@property (retain, nonatomic) UIButton *leftSubtitleSelectBtn;
@property (retain, nonatomic) UIButton *rightSubtitleSelectBtn;
@property (retain, nonatomic) UILabel *leftSubtitleLabel;
@property (retain, nonatomic) UILabel *rightSubtitleLabel;
@property (nonatomic) BOOL open;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *requestPage;
@property (weak, nonatomic) id<IESLiveInteractSubtitleSettingPanelDelegate> delegate;

- (void)didSetAttachingDIContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 subtitleStatus:(BOOL)a1 requestPage:(id)a2 currentType:(long long)a3;
- (id)getStandardLabel:(BOOL)a0;
- (void)switchValueChanged;
- (BOOL)canShowSwitchMode;
- (id)getStandardImageView;
- (void)selectLeftButton;
- (void)selectRightButton;
- (id)getStandardButton;
- (BOOL)blockActionIfNeeded;
- (void).cxx_destruct;
- (void)setUpViews;

@end
