@class NSString;

@interface SAMICore_EngineCreateParameter : NSObject

@property (retain, nonatomic) NSString *resourcePath;
@property (nonatomic) int sampleRate;
@property (retain, nonatomic) NSString *md5;

- (void)dealloc;

@end
