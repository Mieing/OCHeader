@class NSString, NSMutableArray;

@interface WAErrorCodeMgr : MMUserService <MMServiceProtocol> {
    NSMutableArray *_arrRecord;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)addErrCodeRecord:(unsigned long long)a0;
- (id)getAllErrCodeRecord;
- (void).cxx_destruct;

@end
