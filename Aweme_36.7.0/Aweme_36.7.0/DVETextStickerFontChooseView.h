@class DVEStoryFontModel, NSString, UICollectionView, DVEStoryFontManager;
@protocol IESServiceProvider;

@interface DVETextStickerFontChooseView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) DVEStoryFontModel *selectFont;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) NSString *lastNeedAutoSelectFontId;
@property (nonatomic) BOOL firstLayouted;
@property (nonatomic) BOOL enableOffscreenOpt;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (copy, nonatomic) id /* block */ didSelectedFontBlock;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL useModernStyle;
@property (nonatomic) BOOL isFromTextTemplate;
@property (retain, nonatomic) DVEStoryFontManager *fontManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stickerFonts;
- (void)selectWithIndexPath:(id)a0;
- (void)selectWithFontID:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 serviceProvider:(id)a1;
- (void)clearSelectFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isFromTextTemplate:(BOOL)a1;
- (void)updateShouldRasterize:(BOOL)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)setup;

@end
