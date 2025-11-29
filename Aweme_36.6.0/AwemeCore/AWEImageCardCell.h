@class NSIndexPath, NSString, UIImageView, UIView, AWECardModel, AWECardContext;

@interface AWEImageCardCell : UICollectionViewCell <AWECollectionViewCellProtocol> {
    BOOL _selected;
}

@property (retain, nonatomic) AWECardModel *model;
@property (retain, nonatomic) AWECardContext *context;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) id /* block */ cellDidSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)buildUI;
- (void)setData:(id)a0 extraInfo:(id)a1;
- (void)addGestureRecognizers;
- (void)itemDeselected;
- (void)bindObservierWithContext:(id)a0;
- (void)itemSelectedAnimated;
- (void).cxx_destruct;
- (BOOL)isSelected;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)itemSelected;
- (void)singleTap;

@end
