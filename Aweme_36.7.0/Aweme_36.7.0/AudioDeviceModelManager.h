@class BAudioKitObjcAudioDeviceModule;

@interface AudioDeviceModelManager : NSObject

@property (retain, nonatomic) BAudioKitObjcAudioDeviceModule *audioDeviceModule;

+ (id)shared;

- (void).cxx_destruct;

@end
