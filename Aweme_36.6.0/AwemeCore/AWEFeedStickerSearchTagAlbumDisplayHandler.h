@class DUXBasicSheet, AWEVisionTagManager, NSArray, UIView, AWESearchStickerModel;
@protocol AWESearchTagProtocol;

@interface AWEFeedStickerSearchTagAlbumDisplayHandler : AWEFeedStickerBasicAlbumHandler

@property (retain, nonatomic) UIView<AWESearchTagProtocol> *contentView;
@property (retain, nonatomic) DUXBasicSheet *basicSheet;
@property (retain, nonatomic) AWEVisionTagManager *tagManager;
@property (retain, nonatomic) AWESearchStickerModel *searchTag;
@property (copy, nonatomic) NSArray *urlList;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (BOOL)canDisplaySticker:(id)a0;
+ (BOOL)enableAISearchNewFrameWorkScanCircle;

- (void)closePanel;
- (void)hideStickers;
- (void)stickerWillAppear;
- (void)removeSticker:(BOOL)a0;
- (void)clickCloseButton;
- (BOOL)isFromSearch;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)handleLongPressAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)displaySticker:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })createSticker:(BOOL)a0;
- (void)updateTagViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)jumpToSearchVisionPage:(id)a0;
- (void).cxx_destruct;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
