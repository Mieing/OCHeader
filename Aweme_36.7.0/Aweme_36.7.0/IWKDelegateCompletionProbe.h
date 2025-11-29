@class NSString;

@interface IWKDelegateCompletionProbe : NSObject

@property (class, nonatomic, getter=shouldCatchFatalError) BOOL catchFatalError;

@property (copy, nonatomic) NSString *probeName;
@property (weak, nonatomic) id caller;
@property (retain, nonatomic) id completionHandler;

+ (void)p_monitorLog:(id)a0;
+ (id)probeWithSelector:(SEL)a0;

- (void)callOnce:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
