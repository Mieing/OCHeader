@class NSArray, UICollectionView, NSString, AWEStoryFontModel;
@protocol AWEVideoCoverTextStyleChooseFontDelegate;

@interface AWEVideoCoverFontChooseView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWEStoryFontModel *selectFont;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *stickerFonts;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) NSString *lastNeedAutoSelectFontId;
@property (nonatomic) BOOL isDisableState;
@property (weak, nonatomic) id<AWEVideoCoverTextStyleChooseFontDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selectWithIndexPath:(id)a0;
- (void)selectWithFontID:(id)a0;
- (void)clearSelectFont;
- (void)disableFontView;
- (void)resetFontView;
- (void)refreshWithStickerFonts:(id)a0;
- (void)disableBackgroundColor:(id)a0;
- (void)resetBackgroundColor:(id)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
