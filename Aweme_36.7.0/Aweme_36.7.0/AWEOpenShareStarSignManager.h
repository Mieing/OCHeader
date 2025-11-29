@class NSString, NSMutableDictionary;

@interface AWEOpenShareStarSignManager : NSObject <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) NSMutableDictionary *completionMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerWillDestory:(id)a0;
- (void)startStarSignWithRespWithResp:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)runCompletionWithShareID:(id)a0 result:(unsigned long long)a1 errMsg:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
