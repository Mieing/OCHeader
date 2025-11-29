@class UIImage, NSString, UIImageView, IESLiveImageView, UILabel, IESLiveInteractVoiceWaveView, HTSLiveAudioBGData;
@protocol IESLiveMultiAudioUserSlotViewDataSource, IESLiveInteractionAsyncResourceLoader, IESLiveCompoundSubscription, IESLiveInteractUserModel;

@interface IESLiveMultiAudioUserSlotView : UIView <IESLiveInteractionAsyncResourceLoading, IESLiveInteractSeatProvider>

@property (retain, nonatomic) IESLiveImageView *avatar;
@property (retain, nonatomic) UIImageView *guestBattleImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) double scale;
@property (nonatomic) double avatarWidth;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) id<IESLiveInteractUserModel> user;
@property (retain, nonatomic) IESLiveInteractVoiceWaveView *voiceWaveView;
@property (retain, nonatomic) HTSLiveAudioBGData *audioRoomBGImage;
@property (retain, nonatomic) UIImage *slotPlaceholderImage;
@property (retain, nonatomic) UIImage *slotEmptyImage;
@property (nonatomic) long long index;
@property (weak, nonatomic) id<IESLiveMultiAudioUserSlotViewDataSource> dataSource;
@property (weak, nonatomic) id<IESLiveInteractionAsyncResourceLoader> asyncResourceLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)emptyImageView;
- (id)nickNameView;
- (void)layoutBaseUI;
- (id)fanticketView;
- (void)remakeNicknameContainerLayout:(id)a0;
- (void)setNameLabelAttributeTextWithOirginText:(id)a0;
- (void)dynamicUpdateItemInfo:(id)a0;
- (id)linkmicUser;
- (void)dynamicResetWithIds:(id)a0;
- (void)dynamicUpdateSeatUIItemInfo:(id)a0;
- (id)interactGiftContainer;
- (id)emojiWidgetContainer;
- (void)dynamicDidUpdateCenter:(struct CGPoint { double x0; double x1; })a0 itemId:(id)a1;
- (id)registerVoiceWaveWithModel:(id)a0;
- (void)updateWithUser:(id)a0 audioRoomBGImage:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isAnchor:(BOOL)a1 scale:(double)a2 avatarWidth:(double)a3;
- (void)updateWithRoomOnwerModel:(id)a0;
- (void)updateAvatarWidth:(double)a0;
- (void)setNameLabelWithNickName:(id)a0;
- (id)slotEmptyBgColor;
- (id)slotEmptyName;
- (void)updateAnimations:(id)a0;
- (id)cachedImageWithKey:(id)a0;
- (void)setCacheImage:(id)a0 withKey:(id)a1;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)dealloc;
- (void)setup;
- (id)avatarImageView;
- (void)clean;

@end
