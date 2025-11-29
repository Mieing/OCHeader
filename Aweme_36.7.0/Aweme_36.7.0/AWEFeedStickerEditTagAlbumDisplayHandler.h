@class AWEInteractionStickerModel, ACCStickerContainerView, NSString, AWEAwemeModel, UIView, ACCDisplayStickerConfig, NSObject;
@protocol AWEPlayInteractionViewControllerProtocol, ACCEditTagStickerViewProtocol, AWEFeedAlbumStickerDisplayManagerProtocol;

@interface AWEFeedStickerEditTagAlbumDisplayHandler : AWEFeedBasicStickerDisplayHandler <AWEFeedStickerAlbumDisplayHandler>

@property (weak, nonatomic) UIView<ACCEditTagStickerViewProtocol> *contentView;
@property (retain, nonatomic) ACCDisplayStickerConfig *config;
@property (weak, nonatomic) NSObject<AWEFeedAlbumStickerDisplayManagerProtocol> *managerDelegate;
@property (nonatomic) long long index;
@property (retain, nonatomic) AWEInteractionStickerModel *sticker;
@property (weak, nonatomic) ACCStickerContainerView *stickerContainer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerProtocol> interactionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canDisplaySticker:(id)a0;

- (void)stickerWillAppear;
- (void)removeSticker:(BOOL)a0;
- (BOOL)isFromSearch;
- (BOOL)canHandleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)displaySticker:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })createSticker:(BOOL)a0;
- (void)fixStickerLocationIfNeeded;
- (BOOL)displayByNative;
- (void)onPlayerFrameChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)jumpToPOIPage:(id)a0;
- (void)trackEvent:(id)a0 editTagInfo:(id)a1 additionDic:(id)a2;
- (void)trackADShowInfoWithModel:(id)a0 config:(id)a1;
- (void)fixCommerceStickerLocationIfNeeded;
- (void).cxx_destruct;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
