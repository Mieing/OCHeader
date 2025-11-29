@class NSString, UIImageView, UICollectionView, AWEIMEmoticonDisplayViewQuickPreviewDelegate;
@protocol AWEIMSimilarEmoticonDisplayQuickViewTrackDelegate, AWEIMEmoticonDisplayViewControllerConfigProtocol;

@interface AWEIMSimilarEmoticonDisplayQuickViewDelegate : NSObject <AWEIMEmoticonDisplayPreviewProtocol, AWEIMQuickLookCollectionViewCellEventProtocol, AWEIMSimilarEmoticonDisplayViewProtocol>

@property (retain, nonatomic) UIImageView *subscribeEmojiView;
@property (nonatomic) BOOL hasTrackedEmojiFromVideoShow;
@property (retain, nonatomic) id<AWEIMEmoticonDisplayViewControllerConfigProtocol> context;
@property (retain, nonatomic) AWEIMEmoticonDisplayViewQuickPreviewDelegate *previewDelegate;
@property (weak, nonatomic) id<AWEIMSimilarEmoticonDisplayQuickViewTrackDelegate> trackDelegate;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentContainerType;
- (void)didSendSimilarEmoticonWithModel:(id)a0 inTheme:(id)a1;
- (void)didAddCustomSimilarEmoticonWithModel:(id)a0 inTheme:(id)a1;
- (id)didLongPressEmoticonDisplayView:(id)a0;
- (void)didSelectPreviewEmoticonWithIndexPath:(id)a0;
- (void)dismissQuickPanelView;
- (void)trackEmojiFromVideoShowIfNeeded;
- (void)didTapQuickLookView:(id)a0 tapButton:(id)a1 tapType:(unsigned long long)a2;
- (void)didTapQuickLookTitleLabel:(id)a0 tapType:(unsigned long long)a1;
- (void)setupWithTitleAndButtonModels;
- (void)actionWithTapType:(unsigned long long)a0;
- (void)dismissHalfScreenContainerViewControllerWithBlock:(id /* block */)a0;
- (void)addToMyFavoriteEmotionWithEmoticonModel:(id)a0 enterMethod:(id)a1;
- (void)checkEmoticonSeries;
- (void)shareCurrentEmoticonAndRequireLogin;
- (void)trackSubscribeButtonClickWithType:(id)a0 isCurrentVIP:(BOOL)a1;
- (void)executeAddStickerWithEmoticonModel:(id)a0 enterMethod:(id)a1;
- (void)shareCurrentEmoticon;
- (BOOL)isExistEmoticon;
- (void).cxx_destruct;

@end
