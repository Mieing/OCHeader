@class UIView, AWEFeedStickerSearchTagAlbumDisplayHandler, NSArray, AWEImageAlbumImageModel, ACCStickerContainerView, AWEAwemeModel, NSString, NSMutableArray, AWEFeedStickerContainerView;

@interface AWEFeedAlbumStickerDisplayManager : NSObject <AWEFeedAlbumStickerDisplayManagerProtocol>

@property (retain, nonatomic) AWEImageAlbumImageModel *model;
@property (retain, nonatomic) AWEFeedStickerContainerView *containerView;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainer;
@property (weak, nonatomic) UIView *container;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetPlayerFrame;
@property (copy, nonatomic) NSArray *handlers;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } searchStickerFrame;
@property (retain, nonatomic) NSMutableArray *stickerFrameArray;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pauseIconFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bottomContainerFrame;
@property (retain, nonatomic) AWEFeedStickerSearchTagAlbumDisplayHandler *vtagDefaultDataHandler;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isPlay;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateImageRectForImage:(struct CGSize { double x0; double x1; })a0 imageViewSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2;
+ (void)processAlbumImagesData:(id)a0;
+ (id)managerWithContainer:(id)a0;
+ (BOOL)checkSearchTagIsCoupon:(id)a0;

- (BOOL)stickersDidTap:(struct CGPoint { double x0; double x1; })a0;
- (void)showAllStickers;
- (void)hideAllStickers;
- (void)hideStickers;
- (void)showStickers;
- (void)dismissStickers;
- (void)configWithContainer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)displayStickers:(id)a0 animated:(BOOL)a1;
- (id)displayContainer;
- (void)removeStickers:(BOOL)a0;
- (void)displaySearchStickers:(id)a0 animated:(BOOL)a1;
- (BOOL)stickersDidLongPress:(struct CGPoint { double x0; double x1; })a0;
- (void)stickerWillAppear;
- (BOOL)isOverlap;
- (void)setupContainer:(id)a0;
- (id)targetHandlerForTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)haveSearchDefaultTag;
- (BOOL)currentHandlerJustCircleTag;
- (BOOL)showCircleTagSwitch;
- (void)createSearchHandlers;
- (void)stickerDisplayAnimated:(BOOL)a0;
- (id)searchTagCouponFilterWithHandlers:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustStickerFrame:(id)a0;
- (id)searchTagDuplicateFilterWithHandlers:(id)a0;
- (BOOL)isDrawCircleTag:(id)a0;
- (BOOL)checkSearchDefaultTagShouldHidden;
- (void)createSearchDefaultHandlerWithNewhandlers:(id)a0 defaultStickerModel:(id)a1;
- (id)getBTM:(id)a0;
- (void)configAllHandlersDataWithArray:(id)a0;
- (id)fetchCurrentPauseImage;
- (id)createCommonSearchTrackParams;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tryAdjustStickerPauseFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
