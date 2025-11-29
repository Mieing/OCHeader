@class IESLiveAudioAvatarView, NSArray, IESLiveAudioBackgroundView, IESLiveBigPartyGuideMaskImageView, UIView, UIImageView, NSString;
@protocol IESLiveGuideAudioBackgroundViewDataSource;

@interface IESLiveGuideAudioChatBackgroundView : UIView <IESLiveGuideAudioBackgroundViewProtocol>

@property (weak, nonatomic) id<IESLiveGuideAudioBackgroundViewDataSource> dataSouce;
@property (retain, nonatomic) IESLiveAudioAvatarView *avatarView;
@property (retain, nonatomic) IESLiveAudioBackgroundView *backgroundView;
@property (retain, nonatomic) UIView *seatsView;
@property (retain, nonatomic) NSArray *seatImageViewArray;
@property (nonatomic) BOOL layoutUpdated;
@property (retain, nonatomic) IESLiveBigPartyGuideMaskImageView *mainSlotImageView;
@property (retain, nonatomic) UIImageView *secondMainSlotView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)setAvatarHidden:(BOOL)a0;
- (void)updateWithSchemaLayout:(int)a0;
- (void)updateLayoutWithAudioInfo:(id)a0;
- (void)setAvatarAlpha:(double)a0;
- (void)updateLayoutWithIsSquare:(BOOL)a0;
- (void)relayoutSceneBackgroundViewIfNeeded;
- (void)setAvatarAnimationWithUrls:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1 diContext:(id)a2;
- (void)updateDoubleCLayout;
- (void)updateGameLayout;
- (void).cxx_destruct;
- (void)resetIfNeeded;
- (void)setupViews;

@end
