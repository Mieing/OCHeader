@class DUXBasicSheet, AWEVisionTagManager, UIView, AWESearchStickerModel;
@protocol AWESearchTagProtocol;

@interface AWEFeedSearchTagStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler

@property (retain, nonatomic) UIView<AWESearchTagProtocol> *contentView;
@property (retain, nonatomic) DUXBasicSheet *basicSheet;
@property (retain, nonatomic) AWEVisionTagManager *tagManager;
@property (nonatomic) double pauseShowTimestamp;
@property (retain, nonatomic) AWESearchStickerModel *searchTag;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (BOOL)canDisplaySticker:(id)a0;
+ (BOOL)enableAISearchNewFrameWorkScanCircle;

- (void)closePanel;
- (void)hideStickers;
- (void)stickerWillAppear;
- (void)removeSticker:(BOOL)a0;
- (BOOL)isFromSearch;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (BOOL)canHandleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)displaySticker:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })createSticker:(BOOL)a0;
- (void)updateTagViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)longPressAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)onPlayerFrameChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)getPlayerPausedTime;
- (BOOL)searchPauseTagDataFromRequest;
- (void)resetPlayerPausedTime;
- (void).cxx_destruct;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
