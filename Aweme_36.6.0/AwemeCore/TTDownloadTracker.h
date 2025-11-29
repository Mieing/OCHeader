@interface TTDownloadTracker : NSObject

@property BOOL isDisableGetFreeDiskSpace;
@property (copy, nonatomic) id /* block */ eventBlock;

+ (id)sharedInstance;

- (void)sendEvent:(unsigned long long)a0 eventModel:(id)a1;
- (id)eventNameWithEvent:(unsigned long long)a0;
- (id)statusWithCommonEvent:(unsigned long long)a0;
- (void)sendFinishEventWithModel:(id)a0;
- (void)sendCancelEventWithModel:(id)a0;
- (void)sendFailEventWithModel:(id)a0 failCode:(long long)a1 failMsg:(id)a2;
- (void)sendUncompleteEventWithModel:(id)a0;
- (void)setDisableGetFreeDiskSpace:(BOOL)a0;
- (void).cxx_destruct;

@end
