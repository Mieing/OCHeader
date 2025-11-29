@class NSPointerArray, NSMutableSet;

@interface AWECameraManager : NSObject

@property (retain, nonatomic) NSPointerArray *recorderArray;
@property (retain, nonatomic) NSMutableSet *taskIdSet;
@property (nonatomic) BOOL shouldPreventNewRecordController;

+ (id)sharedManager;

- (void)dealloc;
- (void)addRecorder:(id)a0;
- (id)allRecorders;
- (void).cxx_destruct;
- (id)init;

@end
