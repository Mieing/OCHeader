@class NSString, NSArray;

@interface CustomAudioModel : NSObject

@property (nonatomic) double Time;
@property (copy, nonatomic) NSString *EventType;
@property (copy, nonatomic) NSString *EventWaveformPath;
@property (copy, nonatomic) NSArray *EventParameters;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
