@class DVEVCContextServiceContainer, NLEInterface_OC;
@protocol IESServiceProvider;

@interface DVEBrushEditHelper : NSObject

@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) DVEVCContextServiceContainer *container;
@property (weak, nonatomic) NLEInterface_OC *nle;
@property (nonatomic) BOOL isBrushValueChanged;
@property (nonatomic) BOOL isExpansionBrushValueChanged;
@property (nonatomic) BOOL isBrushColorChanged;
@property (nonatomic) BOOL isBGColorChanged;

+ (BOOL)isColor:(id)a0 equalTo:(id)a1;

- (void)registerService;
- (void)pausePlay;
- (id)makeVideoSegmentWithImage:(id)a0 path:(id)a1;
- (void)bindServiceInject:(id)a0;
- (long long)findBrushSelectColorValueWithColorValues:(id)a0 brushSlotId:(id)a1;
- (id)initWithNLE:(id)a0;
- (unsigned int)colorValueFromColorArray:(id)a0;
- (void)saveColorValueToExtra:(id)a0 colorValue:(id)a1;
- (id)getNLEInstance;
- (void)addNLEMainVideoOrImageResources:(id)a0 completion:(id /* block */)a1;
- (void)replaceNLEMainImageResourceWithValue:(id)a0;
- (void).cxx_destruct;

@end
