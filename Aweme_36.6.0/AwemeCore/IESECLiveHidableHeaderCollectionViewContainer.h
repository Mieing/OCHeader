@class NSString, UICollectionView;
@protocol IESECLiveHidableHeaderComponentProtocol;

@interface IESECLiveHidableHeaderCollectionViewContainer : UIView <IESECLiveHidableHeaderComponentDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) id<IESECLiveHidableHeaderComponentProtocol> hidableHeaderComponent;
@property (nonatomic) BOOL isHidableHeaderComponentShown;
@property (nonatomic) double currentHeaderHeight;
@property (nonatomic) unsigned long long onHidableHeaderComponentCallingID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onHidableHeaderComponent:(id)a0 shown:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)setHidableHeaderComponent:(id)a0 shown:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionView:(id)a1;
- (void)setupNewHidableHeaderComponent:(id)a0 shown:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)removeCurrentHidableHeaderComponentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)hideHeaderAboveView;
- (void)updateCollectionViewInsetAccordingToNewHeaderHeight:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;

@end
