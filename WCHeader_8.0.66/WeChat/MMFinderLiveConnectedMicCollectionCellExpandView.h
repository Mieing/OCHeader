@class MMFinderLiveConnectedMicBaseExpandView;

@interface MMFinderLiveConnectedMicCollectionCellExpandView : UICollectionReusableView

@property (retain, nonatomic) MMFinderLiveConnectedMicBaseExpandView *baseView;
@property (nonatomic) BOOL isExpand;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (id)ReuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithTitle:(id)a0 isExpand:(BOOL)a1;
- (void)hideBackground;
- (void).cxx_destruct;

@end
