@class NSFileHandle;

@interface WATraceInfo : NSObject

@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (nonatomic) unsigned long long beginTime;

- (void).cxx_destruct;

@end
