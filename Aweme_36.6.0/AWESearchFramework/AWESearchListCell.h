@class UIView;
@protocol AWESearchListViewProtocol;

@interface AWESearchListCell : UICollectionViewCell

@property (retain, nonatomic) UIView<AWESearchListViewProtocol> *mainView;

- (void).cxx_destruct;
- (void)prepareForReuse;

@end
