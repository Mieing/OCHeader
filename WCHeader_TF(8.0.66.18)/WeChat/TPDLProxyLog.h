@protocol TPDLProxyLogDelegate;

@interface TPDLProxyLog : NSObject

@property (weak, nonatomic) id<TPDLProxyLogDelegate> logDelegate;

+ (id)getInstance;

- (id)init;
- (void)logInfo:(id)a0 line:(int)a1 tag:(id)a2 msg:(id)a3;
- (void)logWarn:(id)a0 line:(int)a1 tag:(id)a2 msg:(id)a3;
- (void)logError:(id)a0 line:(int)a1 tag:(id)a2 msg:(id)a3;
- (void)logDebug:(id)a0 line:(int)a1 tag:(id)a2 msg:(id)a3;
- (void).cxx_destruct;

@end
