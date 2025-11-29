@class UIView;
@protocol IESECMallSkeletonCardProtocol;

@interface IESECMallSkeletonViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView<IESECMallSkeletonCardProtocol> *skeletonView;

- (void)updateData:(id)a0 withEventHandler:(id)a1;
- (void)setupUIWithSkeletonType:(long long)a0 coverURL:(id)a1 titleURL:(id)a2 cardRadius:(id)a3 itemIndex:(long long)a4 eventHandler:(id)a5;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
