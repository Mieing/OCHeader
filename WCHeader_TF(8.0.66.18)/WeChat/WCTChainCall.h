@class WCTHandle, WCTError;

@interface WCTChainCall : NSObject {
    WCTHandle *_handle;
    unsigned long long _disposeAction;
    int _changes;
    WCTError *_error;
}

- (id)initWithHandle:(id)a0;
- (id)error;
- (int)getChanges;
- (id)invalidateWhenDispose;
- (id)finalizeStatementWhenDispose;
- (void)saveChangesAndError:(BOOL)a0;
- (void)tryDispose;
- (void).cxx_destruct;

@end
