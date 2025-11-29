@class WCStackFeatPool;

@interface WCFilterStackHandler : NSObject

@property (retain, nonatomic) WCStackFeatPool *stackFeatPool;

- (id)init;
- (void)loadStackFeat;
- (void)saveStackFeat;
- (unsigned long long)addStackFeat:(unsigned long long)a0;
- (void).cxx_destruct;

@end
