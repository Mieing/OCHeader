@class IESECCommentSliceCardManager, UIView;

@interface IESECCommentCollectionViewSliceCell : UICollectionViewCell

@property (retain, nonatomic) IESECCommentSliceCardManager *manager;
@property (weak, nonatomic) UIView *sliceView;
@property (copy, nonatomic) id /* block */ needUpdateLayout;

- (void)loadCardManager:(id)a0;
- (void).cxx_destruct;

@end
