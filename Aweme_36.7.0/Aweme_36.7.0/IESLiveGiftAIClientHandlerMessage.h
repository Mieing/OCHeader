@class NSArray, NSDictionary, NSString;

@interface IESLiveGiftAIClientHandlerMessage : JSONModel

@property (retain, nonatomic) NSArray *giftListChangeRule;
@property (retain, nonatomic) NSArray *strategyInfo;
@property (copy, nonatomic) NSDictionary *eventTrack;
@property (copy, nonatomic) NSString *roomLiveScene;
@property (nonatomic) long long resultType;
@property (copy, nonatomic) NSString *triggerType;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *sceneExtra;
@property (copy, nonatomic) NSString *clientFeature;
@property (copy, nonatomic) NSDictionary *originAIInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
