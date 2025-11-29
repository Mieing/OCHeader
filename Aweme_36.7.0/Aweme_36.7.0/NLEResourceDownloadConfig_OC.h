@interface NLEResourceDownloadConfig_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::media::NLEResourceDownloadConfig> { struct NLEResourceDownloadConfig *__ptr_; struct __shared_weak_count *__cntrl_; } cppConfig;
@property (nonatomic) unsigned long long priorityRule;
@property (nonatomic) int concurrentTaskNum;
@property (nonatomic) int timeThreshold;
@property (nonatomic) int maxPauseCount;

- (void)setResourcePriorityConfig:(id)a0;
- (long long)getResourcePriority:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
