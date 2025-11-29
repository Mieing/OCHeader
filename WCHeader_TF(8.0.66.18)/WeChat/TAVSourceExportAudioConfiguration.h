@class NSDictionary;

@interface TAVSourceExportAudioConfiguration : NSObject

@property (retain, nonatomic) NSDictionary *inputSettings;
@property (nonatomic) unsigned long long sampleRate;
@property (nonatomic) unsigned long long encoderBitRate;
@property (nonatomic) unsigned long long channelCount;
@property (copy, nonatomic) NSDictionary *audioOutputSetting;

- (id)init;
- (id)makeOutputSetting;
- (void).cxx_destruct;

@end
