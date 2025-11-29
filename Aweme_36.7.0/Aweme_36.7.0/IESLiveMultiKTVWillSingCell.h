@class NSString, UIImageView, UILabel, UIView, UIButton;
@protocol IESLiveWebPPlayer, IESLiveVideoChorusService;

@interface IESLiveMultiKTVWillSingCell : IESLiveSongBaseCell

@property (retain, nonatomic) UILabel *orderLabel;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *currentSongView;
@property (retain, nonatomic) UIButton *goTopButton;
@property (retain, nonatomic) UIButton *playAndPauseButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *mvButton;
@property (retain, nonatomic) UIView *songChooserAvatarBackView;
@property (retain, nonatomic) UIImageView *songChooserAvatar;
@property (retain, nonatomic) UILabel *songChooserNameLabel;
@property (retain, nonatomic) UIButton *linkButton;
@property (retain, nonatomic) UILabel *videoChorusLabel;
@property (weak, nonatomic) id<IESLiveVideoChorusService> videoChorusService;
@property (nonatomic) long long index;
@property (nonatomic) BOOL musicPlaying;
@property (nonatomic) BOOL isCloseButtonReplaceToCut;
@property (nonatomic) BOOL goTopButtonHidden;
@property (nonatomic) BOOL closeButtonHidden;
@property (nonatomic) BOOL linkButtonHidden;
@property (copy, nonatomic) NSString *orderLabelText;
@property (nonatomic) BOOL playAndPauseHidden;
@property (nonatomic) BOOL currentSongViewHidden;

- (void)didSetAttachingDIContextCallOnce;
- (void)p_setupUIs;
- (void)layoutWithRecommendChorusRoomStyleIfNeed;
- (void)renderWithItem:(id)a0 withIndex:(long long)a1;
- (void)updateMultiChorusButtonHidden:(BOOL)a0 orderedByCurrentLoginUser:(BOOL)a1 isKTVController:(BOOL)a2;
- (void)didClickMVButton;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
