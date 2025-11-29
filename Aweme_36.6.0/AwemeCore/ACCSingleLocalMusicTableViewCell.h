@class UIImageView, UILabel, UIView, UIButton;
@protocol ACCMusicModelProtocol;

@interface ACCSingleLocalMusicTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *backMusicView;
@property (retain, nonatomic) UIImageView *playStateView;
@property (retain, nonatomic) UILabel *musicTitle;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIView *featureContainView;
@property (retain, nonatomic) UIButton *clipButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIButton *renameButton;
@property (nonatomic) unsigned long long playerStatus;
@property (nonatomic) unsigned long long featureStatus;
@property (retain, nonatomic) id<ACCMusicModelProtocol> musicModel;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ clipAction;
@property (copy, nonatomic) id /* block */ renameAction;
@property (copy, nonatomic) id /* block */ deleteAction;
@property (nonatomic) BOOL disableClipButton;

+ (double)sectionHeight;

- (void)setUI;
- (void)confirmButtonClick;
- (void)p_stopLoadingAnimation;
- (void)configWithEditStatus:(BOOL)a0;
- (void)configWithPlayerStatus:(unsigned long long)a0;
- (void)p_configDurationLabel:(id)a0;
- (void)remakeMusicInfoArea;
- (void)transformToStatus:(unsigned long long)a0 animated:(BOOL)a1;
- (void)configWithPlayerStatus:(unsigned long long)a0 animated:(BOOL)a1;
- (void)p_prepareConfigWithPlayerStatus:(unsigned long long)a0 animated:(BOOL)a1;
- (void)p_startloadingStateAnimation;
- (double)p_maxTitleLength;
- (void)p_MusicControlAnimate;
- (void)clipButtonClick;
- (void)deleteButtonClick;
- (void)renameButtonClick;
- (void)bindMusicModel:(id)a0;
- (void)configWithPlayerStatus:(unsigned long long)a0 animated:(BOOL)a1 editStatus:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
