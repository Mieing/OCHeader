@class IESLiveInteractConfigLayoutCanvas, NSArray, NSString, IESLiveInteractConfigLayoutUIContainer, IESLiveInteractConfigLayoutContent;

@interface IESLiveInteractConfigLayoutModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLiveInteractConfigLayoutContent *ratioContent;
@property (copy, nonatomic) NSArray *ratioRegions;
@property (copy, nonatomic) NSArray *regionStreamLayouts;
@property (nonatomic) double contentWidthHeightRatio;
@property (retain, nonatomic) IESLiveInteractConfigLayoutUIContainer *uiContainer;
@property (retain, nonatomic) IESLiveInteractConfigLayoutCanvas *canvas;
@property (retain, nonatomic) IESLiveInteractConfigLayoutContent *content;
@property (copy, nonatomic) NSArray *regions;
@property (copy, nonatomic) NSArray *seats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentJSONTransformer;
+ (id)canvasJSONTransformer;
+ (id)uiContainerJSONTransformer;
+ (id)regionsJSONTransformer;
+ (id)seatsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)modelWithDictionary:(id)a0;

- (id)copy;
- (void).cxx_destruct;

@end
