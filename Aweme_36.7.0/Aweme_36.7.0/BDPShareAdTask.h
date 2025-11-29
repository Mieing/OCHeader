@class NSString, BDPUniqueID;

@interface BDPShareAdTask : NSObject <BDPAppRewardTaskProtocol>

@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUniqueId:(id)a0 params:(id)a1;
- (void)runRewardTaskWithExecuteCallBack:(id /* block */)a0 resultCompletion:(id /* block */)a1;
- (void).cxx_destruct;

@end
