@class NSArray, NSNumber, NSString;

@interface IESECLiveTopVibeModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *interactionVibes;
@property (retain, nonatomic) NSArray *interactionVibesV2;
@property (retain, nonatomic) NSNumber *serverTime;
@property (retain, nonatomic) NSString *logID;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSString *ttStable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interactionVibesV2JSONTransformer;
+ (id)interactionVibesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
