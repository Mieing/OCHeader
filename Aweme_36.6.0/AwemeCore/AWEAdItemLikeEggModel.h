@class NSString, NSMutableDictionary, AWEURLModel;
@protocol AWEAdPreloadComponentContext;

@interface AWEAdItemLikeEggModel : MTLModel <MTLJSONSerializing, AWEAdEggModelProtocol>

@property (copy, nonatomic) NSString *sourceURL;
@property (retain, nonatomic) AWEURLModel *sourceURLList;
@property (copy, nonatomic) NSString *sourceType;
@property (nonatomic) long long subType;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *likeButtonAnimationUrl;
@property (copy, nonatomic) NSString *likeEggAlphaVideo;
@property (copy, nonatomic) NSString *logoIconUrl;
@property (nonatomic) double appearCountDown;
@property (nonatomic) double disappearCountDown;
@property (copy, nonatomic) NSString *likeIconTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *openURL;
@property (nonatomic) BOOL isH5;
@property (nonatomic) BOOL isLynx;
@property (copy, nonatomic) NSString *lynxURL;
@property (retain, nonatomic) NSMutableDictionary *componentStages;
@property (weak, nonatomic) id<AWEAdPreloadComponentContext> componentContext;

+ (BOOL)automaticallyDefaultMapping;
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
