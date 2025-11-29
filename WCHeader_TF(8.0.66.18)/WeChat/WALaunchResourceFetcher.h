@class NSString;

@interface WALaunchResourceFetcher : MMUserService <MMServiceProtocol>

@property (nonatomic) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cancelRequest;
- (void)enableRequest;
- (BOOL)isRequestCancelled;
- (BOOL)contact:(id)a0 debugMode:(unsigned long long)a1 hasSameOrNewerVersionThan:(unsigned int)a2;
- (id)getValidAppid:(id)a0 contact:(id)a1;
- (id)getValidUsrName:(id)a0 contact:(id)a1;
- (void)startFetchLaunchResourceWithOpenInfo:(id)a0 version:(unsigned int)a1 taskExtInfo:(id)a2 contactUpdateHandler:(id /* block */)a3;

@end
