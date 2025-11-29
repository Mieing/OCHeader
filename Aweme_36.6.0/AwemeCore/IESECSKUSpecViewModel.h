@class UIColor, NSString, IESECSKUDetailContext, IESECSKUModel, IESECSKUSizeAssistantComponent, NSArray, IESECSKUSpecInfo;

@interface IESECSKUSpecViewModel : NSObject <IESECSKUViewModelProtocol>

@property (retain, nonatomic) IESECSKUModel *skuModel;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (nonatomic) unsigned long long specSection;
@property (readonly, copy, nonatomic) NSString *specName;
@property (readonly, copy, nonatomic) NSString *subDesc;
@property (readonly, nonatomic) unsigned long long specIndex;
@property (readonly, nonatomic) IESECSKUSizeAssistantComponent *sizeAssistant;
@property (readonly, copy, nonatomic) NSArray *specItems;
@property (nonatomic) long long specImageType;
@property (readonly, nonatomic) UIColor *atmosphereColor;
@property (retain, nonatomic) IESECSKUSpecInfo *specInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSKUModel:(id)a0 detailContext:(id)a1 specInfo:(id)a2 specSection:(long long)a3;
- (void)skuModuleShow:(id)a0 extra:(id)a1 once:(BOOL)a2;
- (id)initWithSKUModel:(id)a0 detailContext:(id)a1;
- (void)openSizeChartPanel;
- (void)setUpDefaultSelectedSpec;
- (id)getSkuFromString;
- (void).cxx_destruct;
- (void)selectItemAtIndex:(long long)a0;

@end
