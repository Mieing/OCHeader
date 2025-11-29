@class AWELiveCardBottomInfoView, AWELiveCardTopInfoView, UIImageView, AWELiveVSCustomTitleLable, AWELiveVSBottomBarView, UIView;

@interface AWELiveCardContainerView : UIView

@property (nonatomic) struct CGSize { double width; double height; } updatedSize;
@property (nonatomic) BOOL isPortraitStream;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL didPlaySuccess;
@property (retain, nonatomic) AWELiveCardTopInfoView *topView;
@property (retain, nonatomic) AWELiveCardBottomInfoView *bottomView;
@property (retain, nonatomic) AWELiveVSCustomTitleLable *topTitle;
@property (retain, nonatomic) AWELiveVSCustomTitleLable *bottomTitle;
@property (retain, nonatomic) AWELiveVSBottomBarView *bottomBar;
@property (retain, nonatomic) UIImageView *topImageView;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) UIImageView *cover;
@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) UIView *playerWrapperView;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ clickIconAreaAction;

- (void)_registerFontIfNeed;
- (BOOL)_isFontRegisted;
- (id)createPlayerWrapperView;
- (void)addActionControlWithBottomView:(id)a0;
- (void)updatePlayerWithPortrait:(BOOL)a0;
- (void)updatePlayerSize:(struct CGSize { double x0; double x1; })a0 isPortraitStream:(BOOL)a1 didPlaySuccess:(BOOL)a2;
- (void)p_updatePortraitStreamWithPlayerSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_updateLandscapeStreamWithPlayerSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateTitleToPotrait;
- (double)p_topOffSet;
- (void)updateTitleToLandscape;
- (void)addBlurrViewOnCoverView:(id)a0;
- (void)resetPlayerWithPortrait:(BOOL)a0;
- (void)resetCard;
- (void)showBottomBar:(BOOL)a0;
- (void)showPlayerOnly:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)tapped:(id)a0;
- (void)addPlayerView:(id)a0;

@end
