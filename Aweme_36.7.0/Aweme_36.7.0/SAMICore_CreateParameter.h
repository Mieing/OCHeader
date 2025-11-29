@interface SAMICore_CreateParameter : NSObject

@property (nonatomic) int sampleRate;
@property (nonatomic) int maxBlockSize;
@property (nonatomic) char *modelBuffer;
@property (nonatomic) int modelLen;
@property (nonatomic) int numChannel;
@property (nonatomic) int numAudioBuffer;
@property (nonatomic) char *jsonConfig;
@property (nonatomic) const char *bussinessInfo;
@property (nonatomic) const char *configInfo;

@end
