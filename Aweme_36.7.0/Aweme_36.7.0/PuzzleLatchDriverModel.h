@class PuzzleContext, IESHYHybridContainerConfig, NSObject;
@protocol OS_dispatch_queue;

@interface PuzzleLatchDriverModel : NSObject

@property (weak, nonatomic) PuzzleContext *context;
@property (weak, nonatomic) IESHYHybridContainerConfig *configuration;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *safeQueue;

- (void).cxx_destruct;

@end
