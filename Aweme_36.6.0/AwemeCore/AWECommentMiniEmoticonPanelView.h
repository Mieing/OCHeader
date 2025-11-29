@class NSArray, UICollectionView, NSString, UIView, AWECommentQuickCommentHelper;
@protocol AWECommentMiniEmoticonPanelViewDelegate;

@interface AWECommentMiniEmoticonPanelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWECommentMiniEmoticonPanelViewProtocol>

@property (nonatomic) long long imageScale;
@property (retain, nonatomic) UICollectionView *emoticonsBar;
@property (retain, nonatomic) NSArray *emoticonViews;
@property (retain, nonatomic) NSArray *hotWordViews;
@property (retain, nonatomic) NSArray *emoticonModels;
@property (nonatomic) double horizontalMargin;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIView *inputView;
@property (copy, nonatomic) id /* block */ fetchDataSource;
@property (copy, nonatomic) id /* block */ processEmoticonList;
@property (weak, nonatomic) AWECommentQuickCommentHelper *quickCommentHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWECommentMiniEmoticonPanelViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ didClickEmoticonBlock;
@property (copy, nonatomic) id /* block */ didClickQuickCommentBlock;

+ (Class)aAWEPadModuleAdapterClass;

- (id)currentEmoticonsString;
- (id)aAWEPadModuleAdapter;
- (void)resetEmoticonOrder;
- (BOOL)isUsedRemoteDataEmoticons;
- (void)p_setupImageScale;
- (void)p_layout;
- (id)fetchEmoticonDataSource;
- (void)p_setEmoticonView:(id)a0 withEmoticonModel:(id)a1;
- (void)handleEmoticonTapedWithIndex:(long long)a0;
- (id)transferHotWordString:(id)a0;
- (struct CGSize { double x0; double x1; })emoticonSize;
- (void)p_setupPadUI;
- (void)p_layoutPadUI;
- (void)handleWordTapedWithIndex:(long long)a0;
- (void)setContentOffsetZero;
- (id)insideStringAtIndex:(id)a0;
- (double)precaculateCellWidthForHotWord:(id)a0;
- (void)p_setupUI;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputView:(id)a1;

@end
