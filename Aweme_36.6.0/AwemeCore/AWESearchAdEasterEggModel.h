@class NSString, NSMutableDictionary, NSNumber, AWEURLModel;
@protocol AWEAdPreloadComponentContext;

@interface AWESearchAdEasterEggModel : MTLModel <MTLJSONSerializing, AWEAdEggModelProtocol>

@property (retain, nonatomic) NSNumber *eggId;
@property (copy, nonatomic) NSString *eggName;
@property (copy, nonatomic) NSString *sourceType;
@property (retain, nonatomic) AWEURLModel *sourceURLList;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *openURL;
@property (nonatomic) BOOL isH5;
@property (nonatomic) BOOL isLynx;
@property (copy, nonatomic) NSString *lynxURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *componentStages;
@property (weak, nonatomic) id<AWEAdPreloadComponentContext> componentContext;

+ (id)sourceURLJSONTransformer;
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
