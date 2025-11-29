@interface NLESingleSlotMattingTask_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::media::NLESingleSlotMattingTask> { struct NLESingleSlotMattingTask *__ptr_; struct __shared_weak_count *__cntrl_; } cppNode;

- (id)initWithTrackSlot:(id)a0 NLEModel:(id)a1 workspace:(id)a2 algorithmConfigPath:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)start;
- (void)cancel;

@end
