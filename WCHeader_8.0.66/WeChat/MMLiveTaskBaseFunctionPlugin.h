@class MMLiveBaseTask, MMFinderLiveTaskId;
@protocol MMFinderLiveTaskFunctionPlugin;

@interface MMLiveTaskBaseFunctionPlugin : NSObject

@property (weak, nonatomic) MMLiveBaseTask<MMFinderLiveTaskFunctionPlugin> *liveTask;
@property (readonly, nonatomic) MMFinderLiveTaskId *finderTaskId;
@property (readonly, nonatomic) BOOL isLiveRoom;

- (id)initWithLiveTask:(id)a0;
- (void)onDataItemUpdated;
- (void)onExtFlagExtUpdated;
- (void).cxx_destruct;

@end
