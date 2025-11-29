@class NSString, IESECCommentSliceViewModel, UIView, IESECCommentSliceManager;

@interface IESECCommentSliceCollectionViewCell : UICollectionViewCell <IGListBindable>

@property (retain, nonatomic) UIView *content;
@property (retain, nonatomic) IESECCommentSliceViewModel *slice;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (copy, nonatomic) id /* block */ didUpdateViewSize;
@property (retain, nonatomic) IESECCommentSliceManager *sliceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)attachContentView:(id)a0;
- (void)updateContentWithSliceManager:(id)a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
