@class NSString, NSArray;

@interface IESECLiveCartControlConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *limitKey;
@property (nonatomic) long long singleRoomShowTimes;
@property (nonatomic) long long totalShowTimes;
@property (nonatomic) long long period;
@property (nonatomic) BOOL isNaturalTime;
@property (retain, nonatomic) NSArray *cancelActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cancelActionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
