@class NSString, NSDictionary, NSArray, NSMutableDictionary, NSNumber, AWEURLModel;
@protocol AWEAdPreloadComponentContext;

@interface AWEOriginalAdLynxComponentModel : MTLModel <MTLJSONSerializing, AWEAdPreloadComponentProtocol>

@property (nonatomic) unsigned long long lynxType;
@property (nonatomic) unsigned long long sceneType;
@property (copy, nonatomic) NSString *lynxButtonTemplateSchema;
@property (copy, nonatomic) NSDictionary *lynxRawData;
@property (nonatomic) long long buttonStyle;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *learnMoreBgColor;
@property (retain, nonatomic) NSNumber *changeButtonColorTime;
@property (nonatomic) long long showLearnMoreAfterSeconds;
@property (readonly, nonatomic) BOOL isValidLynxComponent;
@property (copy, nonatomic) NSArray *geckoInfoList;
@property (retain, nonatomic) AWEURLModel *webIconURL;
@property (nonatomic) long long cnyPendantPreloadType;
@property (nonatomic) long long cnyCompassPreloadType;
@property (nonatomic) unsigned long long zIndexType;
@property (nonatomic) long long fontScaleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *componentStages;
@property (weak, nonatomic) id<AWEAdPreloadComponentContext> componentContext;

+ (id)geckoInfoListJSONTransformer;
+ (id)webIconURLJSONTransformer;
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
