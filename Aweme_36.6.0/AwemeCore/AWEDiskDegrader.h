@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEDiskDegrader : NSObject

@property (nonatomic) unsigned long long degradation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *degradationQueue;
@property (nonatomic) BOOL isCache;

- (id)initWithDegradation:(unsigned long long)a0 isCache:(BOOL)a1;
- (void)startDegradation;
- (void)degradeInternal;
- (unsigned long long)countWrittenFilesWithPath:(id)a0;
- (void)writeDegradationFileWithPath:(id)a0 size:(unsigned long long)a1;
- (void)__cleanLegacyDegradationFileWithPath:(id)a0;
- (void).cxx_destruct;
- (void)clear;

@end
