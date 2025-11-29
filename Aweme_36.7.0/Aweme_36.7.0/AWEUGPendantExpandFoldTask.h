@class AWEAwemeModel, NSString, AWEUGPendantActivityModel;
@protocol AWEUGPendantUIProtocol, AWEUGPendantTaskStatusProtocol;

@interface AWEUGPendantExpandFoldTask : NSObject <AWEUGPendantTaskProtocol>

@property (weak, nonatomic) id<AWEUGPendantTaskStatusProtocol> taskStatusTarget;
@property (nonatomic) long long currentViewCount;
@property (retain, nonatomic) AWEUGPendantActivityModel *dataModel;
@property (weak, nonatomic) id<AWEUGPendantUIProtocol> pendant;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (readonly, nonatomic) BOOL isInProcess;
@property (readonly, nonatomic) BOOL isPausing;
@property (copy, nonatomic) id /* block */ taskDoneHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCurrentAwemeModel:(id)a0;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (void)pendantStatusChanged:(id)a0;
- (void)taskDone;
- (void)bindTaskStatusTarget:(id)a0;
- (void)bindPendant:(id)a0;
- (void)updateActivityModel:(id)a0;
- (void)checkIfNeedFold;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)stop;
- (void)start;
- (void)resume;

@end
