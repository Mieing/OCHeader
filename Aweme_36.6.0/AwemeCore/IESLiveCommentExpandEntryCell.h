@class IESLiveAnimatedImageView, IESLiveCommentExpandEntryItem, UIView;
@protocol IESLiveCompoundSubscription;

@interface IESLiveCommentExpandEntryCell : UICollectionViewCell

@property (retain, nonatomic) IESLiveAnimatedImageView *imageView;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) IESLiveCommentExpandEntryItem *item;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> dispose;

- (void)changeImageViewWithSelected:(BOOL)a0;
- (void)setAccessibilityByItem:(id)a0;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupViews;

@end
