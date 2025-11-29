@class NSNumber, NSArray;

@interface RTVInteractionDisableNarrowModelsSetting : JSONModel

@property (retain, nonatomic) NSNumber *roomPollingInterval;
@property (retain, nonatomic) NSNumber *enableFloatWindow;
@property (retain, nonatomic) NSNumber *frameRate;
@property (retain, nonatomic) NSNumber *enablePreJoinRoom;
@property (copy, nonatomic) NSArray *disableModels;
@property (retain, nonatomic) NSNumber *disableMuteAudioBeforeFirstFrame;
@property (retain, nonatomic) NSNumber *enable;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
