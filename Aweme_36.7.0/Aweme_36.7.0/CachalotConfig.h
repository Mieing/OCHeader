@protocol CachalotLogger;

@interface CachalotConfig : NSObject

@property (readonly, copy, nonatomic) id /* block */ longPressDebugBlock;
@property (readonly, nonatomic) BOOL raiseRenderException;
@property (readonly, nonatomic) BOOL raiseParseException;
@property (readonly, nonatomic) BOOL safePerformBatchUpdates;
@property (readonly, nonatomic) BOOL enableFixIOS17ReloadData;
@property (readonly, nonatomic) BOOL disableCacheRenderException;
@property (readonly, nonatomic) id<CachalotLogger> loggerImp;
@property (readonly, copy, nonatomic) id /* block */ assertImp;
@property (nonatomic) BOOL debugMode;
@property (copy, nonatomic) id /* block */ longPressDebugBlock;
@property (nonatomic) BOOL raiseRenderException;
@property (nonatomic) BOOL raiseParseException;
@property (retain, nonatomic) id<CachalotLogger> loggerImp;
@property (nonatomic) BOOL safePerformBatchUpdates;
@property (nonatomic) BOOL enableFixIOS17ReloadData;
@property (nonatomic) BOOL disableCacheRenderException;
@property (copy, nonatomic) id /* block */ assertImp;
@property (nonatomic) BOOL fixTransactionParentMissing;

+ (BOOL)enableFixIOS17ReloadData;
+ (BOOL)enableFixIOS17ReloadData;
+ (BOOL)safePerformBatchUpdates;
+ (BOOL)safePerformBatchUpdates;
+ (void)setEnableFixIOS17ReloadData:(BOOL)a0;
+ (void)setSafePerformBatchUpdates:(BOOL)a0;
+ (BOOL)fixTransactionParentMissing;
+ (BOOL)raiseParseException;
+ (void)setLongPressDebugBlock:(id /* block */)a0;
+ (void)setRaiseParseException:(BOOL)a0;
+ (void)setRaiseRenderException:(BOOL)a0;
+ (void)setDisableCacheRenderException:(BOOL)a0;
+ (void)setAssertImp:(id /* block */)a0;
+ (void)setFixTransactionParentMissing:(BOOL)a0;
+ (id /* block */)longPressDebugBlock;
+ (BOOL)raiseRenderException;
+ (BOOL)disableCacheRenderException;
+ (id /* block */)assertImp;
+ (id)loggerImp;
+ (void)setLoggerImp:(id)a0;
+ (id)sharedConfig;
+ (void)setDebugMode:(BOOL)a0;
+ (BOOL)isDebugMode;

- (void).cxx_destruct;

@end
