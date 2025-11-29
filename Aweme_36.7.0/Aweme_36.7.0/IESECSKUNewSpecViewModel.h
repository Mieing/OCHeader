@class NSString, NSArray, IESECSKUModel, IESECSKUCarAdaptViewModel, NSDictionary, IESECSKUNumberViewModel, NSMutableArray, IESECSKUDetailContext, UIColor;

@interface IESECSKUNewSpecViewModel : NSObject <IESECSKUViewModelProtocol>

@property (retain, nonatomic) IESECSKUModel *skuModel;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (copy, nonatomic) NSArray *specList;
@property (retain, nonatomic) IESECSKUNumberViewModel *numViewModel;
@property (retain, nonatomic) IESECSKUCarAdaptViewModel *carAdapterViewModel;
@property (copy, nonatomic) NSString *bigCover;
@property (copy, nonatomic) NSDictionary *picMap;
@property (copy, nonatomic) NSDictionary *bigPicMap;
@property (copy, nonatomic) NSDictionary *smallPicMap;
@property (readonly, nonatomic) UIColor *atmosphereColor;
@property (readonly, nonatomic) BOOL showStepperComponent;
@property (readonly, nonatomic) BOOL specShowImageAndPrice;
@property (copy, nonatomic) NSString *productID;
@property (retain, nonatomic) NSMutableArray *cellArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackWithEventName:(id)a0;
- (void)skuModuleClick:(id)a0 extra:(id)a1;
- (id)initWithSKUModel:(id)a0 detailContext:(id)a1;
- (void)previewDidmissAtIndex:(long long)a0;
- (void)skuModuleShow:(id)a0 extra:(id)a1;
- (void).cxx_destruct;

@end
