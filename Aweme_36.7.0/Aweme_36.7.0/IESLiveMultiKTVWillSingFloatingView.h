@class IESLiveKTVMusicManager, IESLiveMultiKTVWillSingFloatingItem, UIImageView, IESLiveCommonKTVOrderPanelModel, UILabel, UIView, UIButton;
@protocol IESLiveKTVWillSingCellDelegate;

@interface IESLiveMultiKTVWillSingFloatingView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) UIView *songInfoView;
@property (retain, nonatomic) UIImageView *songInfoImageView;
@property (retain, nonatomic) UILabel *songTitleLabel;
@property (retain, nonatomic) UILabel *singerLabel;
@property (retain, nonatomic) UIView *userInfoView;
@property (retain, nonatomic) UIImageView *userAvatarView;
@property (retain, nonatomic) UILabel *usernameLabel;
@property (retain, nonatomic) UIView *buttonsView;
@property (retain, nonatomic) UIButton *goTopButton;
@property (retain, nonatomic) UIButton *linkButton;
@property (retain, nonatomic) UIButton *changeRoomSingButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *mvButton;
@property (retain, nonatomic) UIView *safeAreaPaddingView;
@property (retain, nonatomic) IESLiveKTVMusicManager *musicManager;
@property (retain, nonatomic) IESLiveMultiKTVWillSingFloatingItem *item;
@property (weak, nonatomic) IESLiveCommonKTVOrderPanelModel *panelModel;
@property (weak, nonatomic) id<IESLiveKTVWillSingCellDelegate> delegate;

- (void)updateUIWithModel:(id)a0;
- (void)renderWithModel:(id)a0;
- (void)renderFloatingView;
- (id)initWithPanelModel:(id)a0 diContext:(id)a1;
- (void)didClickMVButton;
- (BOOL)p_isLinked;
- (BOOL)isMusicModelEqual:(id)a0 model:(id)a1;
- (void)tr_trackMatchIconShowWithMatchType:(id)a0;
- (id)currentSongModel;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)isController;
- (void)p_addObservers;

@end
