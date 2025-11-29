@class UIButton, CAGradientLayer, UIImageView, NSString, UILabel, UIView, UITableView;

@interface AWEMusicianHomepagePopView : AWELunaUgPopView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UILabel *musicianNameLabel;
@property (retain, nonatomic) UILabel *musicianDescriptionLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UITableView *songsTableView;
@property (retain, nonatomic) UIView *blockerView;
@property (retain, nonatomic) UIButton *blockerArrowView;
@property (retain, nonatomic) CAGradientLayer *blockerGradientLayer;
@property (retain, nonatomic) UILabel *blockerLabel;
@property (retain, nonatomic) UIImageView *songsEmptyImageView;
@property (retain, nonatomic) UIView *coverCenterYView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showInView:(id)a0 duration:(double)a1;
- (double)p_getSongsTableViewHeight;
- (double)p_getMaxTableViewHeight;
- (void)p_didClickListSongInfo;
- (void)p_didClickNameLabel;
- (void)p_didClickDescription;
- (void)p_didClickCover;
- (void)p_gotoLunaByClickArrow;
- (void)p_updateBlockerLabel;
- (id)p_settingsConfig;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)show;
- (void)showInView:(id)a0;
- (void)setUpUI;
- (unsigned long long)p_cellCount;

@end
