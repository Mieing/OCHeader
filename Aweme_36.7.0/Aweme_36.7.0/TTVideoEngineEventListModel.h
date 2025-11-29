@class NSLock, NSMutableArray;

@interface TTVideoEngineEventListModel : NSObject {
    NSMutableArray *_eventModelArr;
    NSLock *_lock;
}

- (id)eventModels;
- (void)addEventModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
