@class NSArray, NSString, AWECommerceSearchAlphaVideoModel, NSMutableDictionary, NSNumber;
@protocol AWEAdPreloadComponentContext;

@interface AWECommerceSearchBrand3DModel : MTLModel <MTLJSONSerializing, AWEAdPreloadComponentProtocol>

@property (nonatomic) BOOL showBaseLine;
@property (retain, nonatomic) AWECommerceSearchAlphaVideoModel *searchAlphaVideoModel;
@property (copy, nonatomic) NSArray *interactionDisable;
@property (retain, nonatomic) NSNumber *preloadTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *componentStages;
@property (weak, nonatomic) id<AWEAdPreloadComponentContext> componentContext;

+ (id)JSONKeyPathsByPropertyKey;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)a0;

- (id)componentRefer;
- (id)componentCreativeID;
- (id)componentLogExtra;
- (id)componentGroupID;
- (id)componentExtraID;
- (void).cxx_destruct;
- (id)init;
- (id)componentType;

@end
