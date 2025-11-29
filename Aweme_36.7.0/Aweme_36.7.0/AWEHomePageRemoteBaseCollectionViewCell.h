@class UIView, AWEHomePageRemoteItemModel;
@protocol AWEHomePageRemoteBaseCollectionViewCellDelegate;

@interface AWEHomePageRemoteBaseCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) id<AWEHomePageRemoteBaseCollectionViewCellDelegate> delegate;
@property (retain, nonatomic) AWEHomePageRemoteItemModel *itemModel;
@property (retain, nonatomic) UIView *containerView;

- (void)setDelegate:(id)a0 withItemModel:(id)a1;
- (void)updateDelegate:(id)a0 withItemModel:(id)a1;
- (void).cxx_destruct;

@end
