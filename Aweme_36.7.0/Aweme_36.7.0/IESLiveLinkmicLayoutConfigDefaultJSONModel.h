@class NSArray, IESLiveLinkmicLayoutConfigCanvasDefaultJSONModel, IESLiveLinkmicLayoutConfigContentDefaultJSONModel, IESLiveLinkmicLayoutConfigUIContainerDefaultJSONModel, NSString;
@protocol IESLiveLinkmicLayoutConfigCanvas, IESLiveLinkmicLayoutConfigUIContainer, IESLiveLinkmicLayoutConfigContent;

@interface IESLiveLinkmicLayoutConfigDefaultJSONModel : MTLModel <MTLJSONSerializing, IESLiveLinkmicLayoutConfig>

@property (retain, nonatomic) IESLiveLinkmicLayoutConfigUIContainerDefaultJSONModel *uiContainerModel;
@property (retain, nonatomic) IESLiveLinkmicLayoutConfigCanvasDefaultJSONModel *canvasModel;
@property (retain, nonatomic) IESLiveLinkmicLayoutConfigContentDefaultJSONModel *contentModel;
@property (copy, nonatomic) NSArray *regionsModels;
@property (copy, nonatomic) NSArray *seatsModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long adjustBase;
@property (nonatomic) unsigned long long scaleMode;
@property (nonatomic) unsigned long long alignType;
@property (retain, nonatomic) id<IESLiveLinkmicLayoutConfigUIContainer> uiContainer;
@property (retain, nonatomic) id<IESLiveLinkmicLayoutConfigCanvas> canvas;
@property (retain, nonatomic) id<IESLiveLinkmicLayoutConfigContent> content;
@property (copy, nonatomic) NSArray *regions;
@property (copy, nonatomic) NSArray *seats;

+ (id)contentModelJSONTransformer;
+ (id)uiContainerModelJSONTransformer;
+ (id)canvasModelJSONTransformer;
+ (id)regionsModelsJSONTransformer;
+ (id)seatsModelsJSONTransformer;
+ (id)configModelWithDictionary:(id)a0 error:(id *)a1;
+ (id)JSONKeyPathsByPropertyKey;

- (id)uiContainer;
- (id)seats;
- (id)canvas;
- (void).cxx_destruct;
- (id)content;
- (id)init;
- (id)regions;

@end
