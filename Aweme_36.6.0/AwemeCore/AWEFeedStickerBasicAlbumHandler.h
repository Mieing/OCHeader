@class NSObject, NSString, AWEAwemeModel, UIView, ACCStickerContainerView, AWEInteractionStickerModel;
@protocol ACCStickerContentProtocol, AWEPlayInteractionViewControllerProtocol, AWEFeedAlbumStickerDisplayManagerProtocol;

@interface AWEFeedStickerBasicAlbumHandler : NSObject <AWEFeedStickerAlbumDisplayHandler>

@property (weak, nonatomic) UIView<ACCStickerContentProtocol> *contentView;
@property (retain, nonatomic) AWEInteractionStickerModel *sticker;
@property (weak, nonatomic) ACCStickerContainerView *stickerContainer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) struct CGSize { double width; double height; } enlargeTapSize;
@property (weak, nonatomic) NSObject<AWEFeedAlbumStickerDisplayManagerProtocol> *managerDelegate;
@property (nonatomic) long long index;
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
- (void)fixStickerLocationIfNeeded;
- (BOOL)shouldFixLocation;
- (BOOL)displayByNative;
- (void)longPressAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
