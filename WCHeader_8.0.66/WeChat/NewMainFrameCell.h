@class UIView, NSString, MainFrameCellData, ColorGradientView, UIImage, UIDragInteraction, MMDragManager, UIImageView, MainFrameItemView;

@interface NewMainFrameCell : MMMultiMenuTableViewCell <SnapshotPrinterViewProtocol, MMDragDelegate, IMainFrameCellExt> {
    MainFrameItemView *m_itemView;
    UIImageView *m_backGroundViewOfCell;
    UIImage *m_cellBkgImageWithTop;
    UIImage *m_cellBkgImage;
}

@property (retain, nonatomic) MMDragManager *dragManager;
@property (retain, nonatomic) UIDragInteraction *dragInteraction;
@property (retain, nonatomic) UIView *dragLiftingView;
@property (nonatomic) double horizonPadding;
@property (retain, nonatomic) ColorGradientView *rightMaskView;
@property (retain, nonatomic) MainFrameCellData *m_cellData;
@property (retain, nonatomic) MainFrameCellData *m_oldCellData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (BOOL)isSessionSetUnreadable:(id)a0;
- (void)updateMoreMenu:(id)a0;
- (id)makeUnsubscribeMenuItem;
- (void)updateContentView:(id)a0 tableViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateCellTime;
- (void)updateCellContent:(id)a0 withContact:(id)a1;
- (id)accessibilityLabel;
- (void)updateCellBackground:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (void)onMenuTransitionToConfirmState:(long long)a0;
- (void)onMultiMenuAppear;
- (void)onMenuOffsetChange:(double)a0 menuWidth:(double)a1;
- (id)getGreenLabelText;
- (void)playHighlightBackgroundAnimate;
- (id)itemViewSnapshotForDragAndDrop;
- (id)extInfoForSnapshotPrinter;
- (void).cxx_destruct;

@end
