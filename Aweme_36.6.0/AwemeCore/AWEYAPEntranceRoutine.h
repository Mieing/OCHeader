@class NSString, AWEYAPEntranceContext, AWEYAPEntranceRoutineTracker, AWEYAPEntranceProcessChainManager;
@protocol AWEYAPEntranceHandlerProtocol;

@interface AWEYAPEntranceRoutine : NSObject

@property (copy, nonatomic) NSString *bizKey;
@property (retain, nonatomic) AWEYAPEntranceContext *context;
@property (retain, nonatomic) id<AWEYAPEntranceHandlerProtocol> handler;
@property (retain, nonatomic) AWEYAPEntranceProcessChainManager *processManager;
@property (retain, nonatomic) AWEYAPEntranceRoutineTracker *tracker;

- (BOOL)needPreProcess:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
