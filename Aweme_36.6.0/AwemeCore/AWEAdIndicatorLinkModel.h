@class NSArray, NSString, NSMutableDictionary, AWEAdConversionAreaModel, AWEAdIndicatorLinkPositionModel, AWEURLModel;
@protocol AWEAdPreloadComponentContext;

@interface AWEAdIndicatorLinkModel : MTLModel <MTLJSONSerializing, AWEAdPreloadComponentProtocol>

@property (copy, nonatomic) AWEURLModel *positionURL;
@property (copy, nonatomic) NSArray *positions;
@property (retain, nonatomic) AWEAdIndicatorLinkPositionModel *startPosition;
@property (retain, nonatomic) AWEURLModel *icon;
@property (retain, nonatomic) AWEAdConversionAreaModel *buttonInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *componentStages;
@property (weak, nonatomic) id<AWEAdPreloadComponentContext> componentContext;

+ (id)iconJSONTransformer;
+ (id)startPositionJSONTransformer;
+ (id)positionURLJSONTransformer;
+ (id)buttonInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)a0;

- (id)componentRefer;
- (id)componentCreativeID;
- (id)componentLogExtra;
- (id)componentGroupID;
- (id)componentExtraID;
- (void).cxx_destruct;
- (id)componentType;

@end
