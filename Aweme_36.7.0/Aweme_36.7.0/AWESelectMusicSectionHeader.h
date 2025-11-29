@class UIView, NSString, AWEUserModel, UIImageView, UIControl, NSObject, UIViewController, UILabel;
@protocol AWESettingSwitchProtocol, AWESelectMusicSectionHeaderDelegate;

@interface AWESelectMusicSectionHeader : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *playBar;
@property (retain, nonatomic) UIControl *playControl;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) UILabel *playLabel;
@property (retain, nonatomic) UIControl *fullSongControl;
@property (retain, nonatomic) UILabel *fullSongLabel;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *fullSongSwitch;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) UIView *lynxView;
@property (copy, nonatomic) NSString *schema;
@property (weak, nonatomic) UIViewController *containerVC;
@property (nonatomic) BOOL showMusicCenter;
@property (nonatomic) BOOL showPlayAllBar;
@property (retain, nonatomic) NSObject *themeNoti;
@property (weak, nonatomic) id<AWESelectMusicSectionHeaderDelegate> delegate;

+ (id)getReuseIdentifierWithAB:(BOOL)a0 showMusicEntry:(BOOL)a1;
+ (double)playBarHeight;

- (id)initWithReuseIdentifier:(id)a0 containerController:(id)a1 hitAB:(BOOL)a2 showMusicEntry:(BOOL)a3 schema:(id)a4;
- (void)buildLynxContainer;
- (void)didClickPlayAllSongAction;
- (void)didClickOnlyPlayFullSongAction;
- (void)trackMusicianPlayAll;
- (void)trackMusicianOnlyPlayFullSongChanged:(BOOL)a0;
- (void)updateWithUser:(id)a0 showFullSong:(BOOL)a1 onlyFullSong:(BOOL)a2 containVideo:(BOOL)a3;
- (void)initSubviews;
- (void).cxx_destruct;
- (void)feedbackGenerator;
- (void)dealloc;
- (void)initConstraints;

@end
