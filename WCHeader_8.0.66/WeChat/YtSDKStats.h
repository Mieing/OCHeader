@class NSString, NSMutableDictionary;

@interface YtSDKStats : NSObject {
    NSString *_currentState;
    NSString *_currentAction;
    NSString *_prevUpdateState;
    NSString *_prevInfo;
    unsigned long long _currentEnterTimeStampMS;
}

@property (retain, nonatomic) NSMutableDictionary *stateNameMap;
@property (copy, nonatomic) id /* block */ onEventBlock;

+ (id)sharedInstance;
+ (void)clearInstance;

- (id)init;
- (void)deInit;
- (void)registerStateName:(id)a0;
- (unsigned long long)getTimeNow;
- (void)enterState:(id)a0;
- (void)updateState:(id)a0;
- (void)exitState;
- (void)resetState;
- (void)reportError:(int)a0 message:(id)a1;
- (void)reportInfo:(id)a0;
- (void)makeReport:(id)a0 action:(id)a1 error:(id)a2 cost:(id)a3 info:(id)a4;
- (void)sendStateEvent:(id)a0;
- (id)netNameMapper:(id)a0;
- (void).cxx_destruct;

@end
