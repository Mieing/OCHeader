@class AWEKefuFloatingWindowTask;

@interface AWEKefuFloatingWindowTaskManager : NSObject

@property (retain, nonatomic) AWEKefuFloatingWindowTask *currentTask;

+ (id)sharedInstance;

- (id)getWindowInfo;
- (id)getWindowId;
- (void)startWindowWithConfig:(id)a0 completion:(id /* block */)a1;
- (void)closeWindowWithId:(id)a0 closeConfig:(id)a1 completion:(id /* block */)a2;
- (void)showWindowEntranceWithId:(id)a0 completion:(id /* block */)a1;
- (void)hideWindowEntranceWithId:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (void)showWindowPageWithId:(id)a0 recoverTypes:(id)a1 completion:(id /* block */)a2;
- (void)hideWindowPageWithId:(id)a0 completion:(id /* block */)a1;
- (void)changeWindowWithId:(id)a0 stateConfig:(id)a1 completion:(id /* block */)a2;
- (void)setExtraInfoWithId:(id)a0 extraInfo:(id)a1 completion:(id /* block */)a2;
- (void)setDragDeleteTextWithId:(id)a0 dragDeleteText:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
