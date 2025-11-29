@class NSArray, NSMutableSet;

@interface MPPageRelatedInfoCgiTask : MMObject <PBMessageObserverDelegate>

@property (retain, nonatomic) NSArray *urlInfoArr;
@property (retain, nonatomic) NSMutableSet *pageIdentifierSet;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithUrlInfoArr:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)startTask;
- (void)stopTask;
- (BOOL)isTaskContainUrlInfo:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleAppMsgRelatedResp:(id)a0;
- (void)callbackTaskFail;
- (void)callbackTaskSuccess:(id)a0;
- (void).cxx_destruct;

@end
