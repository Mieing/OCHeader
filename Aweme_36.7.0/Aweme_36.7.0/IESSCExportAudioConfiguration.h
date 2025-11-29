@class NSDictionary;

@interface IESSCExportAudioConfiguration : NSObject

@property (retain, nonatomic) NSDictionary *inputSettings;
@property (nonatomic) unsigned long long sampleRate;
@property (nonatomic) unsigned long long encoderBitRate;
@property (copy, nonatomic) NSDictionary *audioOutputSetting;

- (id)makeOutputSetting;
- (void).cxx_destruct;
- (id)init;

@end
