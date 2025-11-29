@class NSString, NSArray;

@interface SAMICore_ResourceParameter : NSObject

@property (nonatomic) int sampleRate;
@property (nonatomic) int maxBlockSize;
@property (nonatomic) int numChannel;
@property (retain, nonatomic) NSString *input;
@property (retain, nonatomic) NSArray *resourcePaths;

@end
