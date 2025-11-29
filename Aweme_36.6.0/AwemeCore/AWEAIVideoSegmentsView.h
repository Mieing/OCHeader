@class AWEAIVideoSegmentOneClickAdjustButton, UIImageView, UICollectionView, UILabel, UIView, ACCButton;

@interface AWEAIVideoSegmentsView : UIView

@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIView *sectionSeparator;
@property (retain, nonatomic) UIView *oneClickAdjustSeparator;
@property (retain, nonatomic) AWEAIVideoSegmentOneClickAdjustButton *oneClickAdjustButton;
@property (nonatomic) struct CGSize { double width; double height; } normalItemSize;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) ACCButton *finishButton;
@property (retain, nonatomic) UIImageView *cursorView;
@property (retain, nonatomic) UICollectionView *videosCollectionView;
@property (nonatomic) BOOL showOneClickAdjustButton;
@property (retain, nonatomic) UIImageView *leftCollectionViewSnapshot;
@property (retain, nonatomic) UIImageView *rightCollectionViewSnapshot;
@property (retain, nonatomic) UIImageView *selectCollectionCellSnapshot;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftCollectionViewSnapshotOriginFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightCollectionViewSnapshotOriginFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectCollectionCellSnapshotOriginFrame;
@property (nonatomic) double panelAnimationDuration;

- (void)buildViews;
- (void)snapshotForPanelTransitionAnimation:(id)a0 heightDiff:(double)a1;
- (void)hidePanelWithAnimationWithCoverFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showPanelWithAnimationWithCompletion:(id /* block */)a0;
- (void)p_setupOneClickButton;
- (void)p_hideOneClickButton;
- (void)p_layoutOneClickButtonIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
