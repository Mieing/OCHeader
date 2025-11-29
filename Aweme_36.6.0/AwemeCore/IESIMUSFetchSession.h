@class IESIMUnavailableStateFetchRequest;

@interface IESIMUSFetchSession : NSObject

@property (retain, nonatomic) IESIMUnavailableStateFetchRequest *request;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ responseCallBack;

- (void)fetchOnlyVisibleData;
- (void)fetchFullAndVisibleData;
- (id)p_requestParamsWithRequest:(id)a0;
- (id)p_createIdsWithAwemeIds:(id)a0;
- (id)p_originTypeWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)fetch;
- (void)dealloc;

@end
