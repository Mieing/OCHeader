@class NSString, NSArray;

@interface EffectEventModel : NSObject

@property (nonatomic) double Time;
@property (copy, nonatomic) NSString *EventType;
@property (nonatomic) double EventDuration;
@property (copy, nonatomic) NSArray *EventParameters;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
