@class SSWCTError, SSWCTHandle;

@interface SSWCTChainCall : NSObject {
    SSWCTHandle *_handle;
    unsigned long long _disposeAction;
    int _changes;
    SSWCTError *_error;
}

@property (nonatomic) unsigned long long begin;
@property (nonatomic) BOOL enableTrack;

- (void)trackIfNeededWithType:(unsigned long long)a0 sql:(const void *)a1 status:(BOOL)a2;
- (id)invalidateWhenDispose;
- (id)finalizeStatementWhenDispose;
- (void)tryDispose;
- (int)getChanges;
- (void)saveChangesAndError:(BOOL)a0;
- (id)initWithHandle:(id)a0;
- (void).cxx_destruct;
- (id)error;

@end
