@class NSArray, IESECSliceSlice, UIView;
@protocol IESECGoodsDetailBottomContainerDelegate;

@interface IESECGoodsDetailBottomContainer : UIView

@property (nonatomic) BOOL isLynxBottom;
@property (copy, nonatomic) NSArray *sliceViews;
@property (retain, nonatomic) UIView *normalBottom;
@property (retain, nonatomic) UIView *supermarketBottom;
@property (copy, nonatomic) NSArray *slices;
@property (retain, nonatomic) IESECSliceSlice *bottomSliceModel;
@property (weak, nonatomic) id<IESECGoodsDetailBottomContainerDelegate> bottomDelegate;
@property (nonatomic) BOOL needAfterLoad;
@property (nonatomic) BOOL didAfterLoad;

- (void)resetBottomSliceModel;
- (void)setupBottom;
- (void)setupExtraSlice;
- (void)setupLynxBottom;
- (void)setupNormalBottom;
- (void)rebindBottom;
- (void)rebindExtra;
- (id)currentBottomView;
- (void)insertNativeParamsToSlice:(id)a0;
- (void)cleanButtonViewBeforeRebind;
- (id)initWithBottomDelegate:(id)a0 needAfterLoad:(BOOL)a1;
- (void)refreshLynx;
- (void)rebind;
- (void).cxx_destruct;
- (void)setupUI;

@end
