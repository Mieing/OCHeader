@interface SAMICore_JSONContextCreateParameter : NSObject

@property (nonatomic) int sampleRate;
@property (nonatomic) int maxBlockSize;
@property (nonatomic) const char *modelBuffer;
@property (nonatomic) int modelLen;
@property (nonatomic) int numChannel;
@property (nonatomic) const char *json_string;

@end
