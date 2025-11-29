@class NSArray, NSNumber, NSString;

@interface IESECLiveReplayMessageModel : IESECLiveApiBaseModel

@property (retain, nonatomic) NSArray *interaction;
@property (retain, nonatomic) NSNumber *serverTime;
@property (retain, nonatomic) NSString *logID;
@property (retain, nonatomic) NSString *ttStable;

+ (id)interactionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
