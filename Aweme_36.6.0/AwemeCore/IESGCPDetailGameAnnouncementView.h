@class UIView, NSString, UIImageView, UILabel, IESGCPListPopupControl, UIButton;

@interface IESGCPDetailGameAnnouncementView : IESGCPDetailBaseView <IESGCPAnnouncementContentViewDelegate>

@property (retain, nonatomic) UILabel *announcementLabel;
@property (retain, nonatomic) UIButton *tapButton;
@property (retain, nonatomic) IESGCPListPopupControl *popupControl;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *announcementIcon;
@property (retain, nonatomic) UIImageView *indicatorIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)handleSchema:(id)a0;
- (void)viewExposed;
- (void)closeAnnouncementContentView;
- (void)layoutWithThemeConfig:(id)a0;
- (void)openSchema:(id)a0 ifNeedCheckUrl:(BOOL)a1;
- (void)taped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
