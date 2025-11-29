@class NSString, AWERLComponentContainer, AWEProfileHeaderContext, UIView;
@protocol AWEProfileHeaderNameAreaSectionCellDelegate_New;

@interface AWEProfileHeaderNameAreaSectionCell_New : UICollectionViewCell <AWERLComponentContainerDelegate>

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) AWERLComponentContainer *componentTree;
@property (weak, nonatomic) id<AWEProfileHeaderNameAreaSectionCellDelegate_New> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentContainer:(id)a0 changeBoundsToSize:(struct CGSize { double x0; double x1; })a1;
- (void)profilePageDidVerticallyScrollWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)profilePageEndVerticallyScrollWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)updateTitleWithOffsetY:(double)a0;
- (void)configWithContext:(id)a0 componentTree:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
