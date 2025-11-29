@class UIImageView, IESECLynxCard, NSString;
@protocol IESECShopInnerFlowLynxCardDelegate;

@interface IESECShopInnerFlowLynxCard : UICollectionViewCell <IESECLynxCardDelegate>

@property (retain, nonatomic) UIImageView *skeletonView;
@property (weak, nonatomic) IESECLynxCard *lynxCard;
@property (weak, nonatomic) id<IESECShopInnerFlowLynxCardDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidUpdate:(id)a0;
- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)lynxCard:(id)a0 didLoadFail:(id)a1;
- (void)sendLynxEvent:(id)a0 params:(id)a1;
- (void)addLynxCard:(id)a0;
- (void)removeLynxCard;
- (void)showSkeletonView:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
