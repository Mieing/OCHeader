@class NSString;

@interface SAMICore_DebugConfig : NSObject

@property (retain, nonatomic) NSString *dumpPath;
@property (retain, nonatomic) NSString *fileNamePrefix;
@property (nonatomic) unsigned int sampleRate;
@property (nonatomic) unsigned int numberChannels;

@end
