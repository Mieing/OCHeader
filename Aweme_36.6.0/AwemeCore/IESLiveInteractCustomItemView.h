@class NSString, UIImageView, UILabel, HTSLiveRoom;
@protocol IESLiveWebImageService, IESLiveWebPPlayer;

@interface IESLiveInteractCustomItemView : IESLiveInteractEntranceBaseView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (retain, nonatomic) id<IESLiveWebImageService> webImageService;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) UILabel *bottomTitleLbl;
@property (nonatomic) BOOL isAudioLive;
@property (copy, nonatomic) id /* block */ currentSceneProvider;
@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (retain, nonatomic) NSString *configurationInteractBottomTitle;

- (void)didSetAttachingDIContext;
- (void)refreshItem:(BOOL)a0;
- (void)renderStatus:(unsigned long long)a0;
- (void)p_animateWithResourceName:(id)a0;
- (id)p_iconNameForIntimateChatWithStatus:(unsigned long long)a0;
- (id)p_iconNameForMultiAudioWithStatus:(unsigned long long)a0;
- (id)p_iconNameForBigPartyWithStatus:(unsigned long long)a0;
- (id)p_iconNameForGiftPKWithStatus:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isAudioLive:(BOOL)a1 currentSceneProvider:(id /* block */)a2 diContext:(id)a3;
- (unsigned long long)currentStatus;
- (void).cxx_destruct;
- (void)loadViews;

@end
