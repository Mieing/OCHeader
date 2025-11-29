@class IESECLiveInteractionVibeProductModel, NSArray, NSDictionary, IESECLiveActionModel, NSString, NSNumber;

@interface IESECLiveInteractionVibeModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *priority;
@property (retain, nonatomic) NSNumber *loopCount;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) long long showedTimes;
@property (retain, nonatomic) NSArray *itemRows;
@property (retain, nonatomic) NSArray *bgColors;
@property (retain, nonatomic) IESECLiveInteractionVibeProductModel *product;
@property (retain, nonatomic) IESECLiveActionModel *clickAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentJSONTransformer;
+ (id)clickActionJSONTransformer;
+ (id)productJSONTransformer;
+ (id)itemRowsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)updateWithInteractionData:(id)a0;
- (void).cxx_destruct;

@end
