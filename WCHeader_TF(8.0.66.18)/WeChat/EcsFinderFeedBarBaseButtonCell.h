@class NSString, EcsRichTextButtonViewModel, UIView;

@interface EcsFinderFeedBarBaseButtonCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) EcsRichTextButtonViewModel *viewDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlighted:(BOOL)a0;
- (void)onViewPositionUpdatedWithIndexPath:(id)a0 sectionItemCount:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void).cxx_destruct;

@end
