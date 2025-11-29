@class NSString;

@interface HTSAudioExportParams : IESMMObject

@property (copy, nonatomic) NSString *fileType;
@property (nonatomic) unsigned int formatID;
@property (nonatomic) long long bitRate;
@property (nonatomic) long long channels;
@property (nonatomic) long long sampleRate;

- (void).cxx_destruct;
- (id)init;

@end
