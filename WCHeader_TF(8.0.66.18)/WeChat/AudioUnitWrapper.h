@interface AudioUnitWrapper : NSObject

@property (nonatomic) struct OpaqueAudioComponentInstance { } *audioUnit;

+ (id)wrapperWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0;

@end
