@class UIView, AWEIMEmojiReplyMenuViewContext, NSArray, AWEIMEmoticonReplyPanelView, AWEIMShapeView, AWEIMEmoticonReplySelectionView, NSString, UICollectionView;

@interface AWEIMEmojiReplyMenuView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) NSArray *menuItemList;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) UIView *menuContentView;
@property (retain, nonatomic) UIView *emoticonContentView;
@property (retain, nonatomic) AWEIMEmoticonReplyPanelView *emoticonPanelView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) AWEIMShapeView *triangleView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UICollectionView *menuItemsCollectionView;
@property (retain, nonatomic) AWEIMEmoticonReplySelectionView *emoticonSelectionView;
@property (nonatomic) BOOL isShowAnimating;
@property (nonatomic) BOOL isDismissAnimating;
@property (nonatomic) struct CGPoint { double x; double y; } longPressBeginPoint;
@property (nonatomic) unsigned long long longPressItemState;
@property (retain, nonatomic) AWEIMEmojiReplyMenuViewContext *context;
@property (copy, nonatomic) id /* block */ didSelectViewModel;
@property (copy, nonatomic) id /* block */ didTapMoreButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuFrameInScreen;
- (void)reloadEmojiList:(id)a0;
- (void)showMenuForBubbleFrameInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highLocationInScreen:(struct CGPoint { double x0; double x1; })a1 lowLocationInScreen:(struct CGPoint { double x0; double x1; })a2 tryHighLocationFirst:(BOOL)a3 menuItemList:(id)a4 menuPanelOptions:(unsigned long long)a5 msgEmoticonList:(id)a6 inView:(id)a7 extra:(id)a8;
- (void)showMenuForBubbleFrameInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tapLocationInScreen:(struct CGPoint { double x0; double x1; })a1 menuItemList:(id)a2 menuPanelOptions:(unsigned long long)a3 msgEmoticonList:(id)a4 moreEmoticon:(BOOL)a5 inView:(id)a6 extra:(id)a7;
- (void)dismissWithoutAnimation;
- (void)p_showMenuWithContext:(id)a0 isNormal:(BOOL)a1;
- (unsigned long long)maxNumberOfItemsInLine;
- (void)p_updateMenuViewShowStatus:(BOOL)a0;
- (void)p_setupMenuWithContext:(id)a0;
- (void)p_setupEmojiWithContext:(id)a0;
- (void)p_updateNormalContext:(id)a0;
- (void)p_updateTextContext:(id)a0;
- (id)createTrianglePathForMenuAbove:(BOOL)a0 anchorHeightPercent:(double)a1 anchorWidthPercent:(double)a2 topMargin:(double)a3;
- (void)addEmoticonPanelView;
- (void)emoticonPanelViewShow:(BOOL)a0 animated:(BOOL)a1;
- (void)didTapBgMask:(id)a0;
- (void)updateEmojiHoverStatusWithHoverState:(unsigned long long)a0 cell:(id)a1;
- (void)p_setupUI;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
