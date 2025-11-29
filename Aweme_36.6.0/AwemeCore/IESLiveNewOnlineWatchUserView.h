@class UILabel, UIButton, UIView;

@interface IESLiveNewOnlineWatchUserView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UILabel *onlineWatchUser;
@property (retain, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIButton *enterBtn;
@property (copy, nonatomic) id /* block */ enterAction;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)setupBgColorIfNeeded;
- (void)showAudienceList:(id)a0;
- (void)setupWatchUser;
- (void)setupBgContainerView;
- (BOOL)enableNewStyles;
- (void)updateMessageLabel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enterListAction:(id /* block */)a1 DIContext:(id)a2;
- (void)refreshUserCount:(id)a0 isDelayUpdate:(BOOL)a1;
- (void).cxx_destruct;
- (id)viewType;

@end
