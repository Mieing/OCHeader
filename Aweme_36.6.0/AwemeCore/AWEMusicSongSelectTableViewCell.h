@class UIStackView, NSString, UIImageView, AWEMusicSongSelectTableViewCellModel, UILabel, UIView, UIButton;
@protocol MusicService, AWEMusicSongSelectTableViewCellDelegate;

@interface AWEMusicSongSelectTableViewCell : UITableViewCell <AWEMusicServiceDelegate>

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UIButton *selectBtn;
@property (retain, nonatomic) UIButton *checkBtn;
@property (retain, nonatomic) UIButton *playBtn;
@property (retain, nonatomic) UIButton *addAnchorBtn;
@property (retain, nonatomic) UIStackView *tagStackView;
@property (retain, nonatomic) UIView *previewTagView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) AWEMusicSongSelectTableViewCellModel *curModel;
@property (retain, nonatomic) id<MusicService> musicService;
@property (weak, nonatomic) id<AWEMusicSongSelectTableViewCellDelegate> delegate;
@property (nonatomic) long long index;
@property (nonatomic) unsigned long long selectedStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)musicService:(id)a0 playStatusChanged:(long long)a1;
- (void)configSubviews;
- (void)playOrPause:(BOOL)a0;
- (void)removeBtnClicked;
- (void)displayWithCellModel:(id)a0 musicService:(id)a1;
- (id)p_makeTagViewWithTitle:(id)a0;
- (void)reloadCollectionStatus;
- (void)p_updateAccessibility:(BOOL)a0;
- (void)updateAddAnchorStyleLayOut;
- (BOOL)p_isCellDisable;
- (void)selectBtnDoClicked:(id)a0;
- (void)addAnchorBtnDoClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;

@end
