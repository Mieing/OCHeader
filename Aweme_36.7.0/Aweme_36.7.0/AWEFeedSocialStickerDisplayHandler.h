@class ACCStickerContainerView, NSString, AWEAwemeModel, UIView, NSObject, AWEInteractionStickerModel;
@protocol ACCStickerContentProtocol, AWEPlayInteractionViewControllerProtocol, AWEFeedAlbumStickerDisplayManagerProtocol;

@interface AWEFeedSocialStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler <AWEFeedStickerAlbumDisplayHandler>

@property (weak, nonatomic) UIView<ACCStickerContentProtocol> *contentView;
@property (nonatomic) BOOL isInPureModePage;
@property (nonatomic) BOOL hasFetched;
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
- (BOOL)isFromSearch;
- (void)displaySticker:(BOOL)a0;
- (BOOL)canResponseEvent;
- (void)bubbleJumpClicked;
- (void)trackForSocialStickerClicked;
- (void)showSocialTextList;
- (void)doCommonTrackWithExtraTrackInfo:(id)a0 event:(id)a1;
- (void)trackForHotSpotTagWithTopic:(id)a0 actionType:(id)a1;
- (id)socialJumpURLStringWithSocialModel:(id)a0;
- (void)doSocialJumpTrackWithSocialModel:(id)a0 from:(id)a1 withJumpUrl:(id)a2;
- (void)doCommonSocialJumpTrackWithModel;
- (void).cxx_destruct;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)willDisplay;

@end
