@class NSString, UIImageView, UILabel, UIButton;

@interface AWESearchLocationAuthGuideView : UIView <AWESearchLocationAuthGuideViewProtocol>

@property (nonatomic) BOOL isBecomeActiveFromLocationAuthorization;
@property (retain, nonatomic) UIImageView *headIconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *authButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) id /* block */ finishAuthBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonClicked;
- (void)p_onApplicationDidBecomeActiveNotification:(id)a0;
- (void)trackDisplay;
- (void)p_onAuthGuideViewDismissNotification:(id)a0;
- (void)trackPermissionStatus:(id)a0;
- (void)topBarDisappear;
- (void)trackBarClick:(id)a0;
- (void)authButtonClicked;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;

@end
