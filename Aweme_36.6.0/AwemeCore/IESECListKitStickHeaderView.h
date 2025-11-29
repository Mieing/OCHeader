@class NSString, IESECLynxCard, IESECLynxCardBridgeMethod, UICollectionReusableView;
@protocol IESECLynxCardDelegate;

@interface IESECListKitStickHeaderView : UICollectionReusableView <IESECLynxCardDelegate> {
    UICollectionReusableView *_nativeView;
}

@property (retain, nonatomic) IESECLynxCard *lynxView;
@property (retain, nonatomic) IESECLynxCardBridgeMethod *dynamicDataJSB;
@property (weak, nonatomic) id<IESECLynxCardDelegate> delegate;
@property (nonatomic) long long sectionIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)findViewWithName:(id)a0;
- (void)viewDidDisappear:(id)a0 sourceType:(unsigned long long)a1;
- (void)viewDidAppear:(id)a0 sourceType:(unsigned long long)a1;
- (void)updateWithNativeModel:(id)a0;
- (void)registerBridgesIfNeed:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
