@class NSCache, NSOperationQueue, NSString;

@interface IESECShopTaskController : IESECRelationController <IESECShopTaskControllerProtocol>

@property (retain, nonatomic) NSCache *operationsDict;
@property (readonly, nonatomic) NSOperationQueue *mainQueue;
@property (readonly, nonatomic) NSOperationQueue *multiQueue;
@property (nonatomic) BOOL hasRunSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setup;
- (void)commitOperation:(id)a0 signalType:(unsigned long long)a1;
- (void)commitTaskBlock:(id /* block */)a0 signalType:(unsigned long long)a1;
- (void)runOnSignal:(unsigned long long)a0;
- (void)runFMPSignal;
- (void)runTasksOnMainThreadIdle:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
