@class NSMutableDictionary;

@interface MAMapRequestLogger : NSObject {
    NSMutableDictionary *_internalMap;
}

+ (id)sharedInstance;

- (void)onBeginOfOp:(id)a0;
- (void)onEndOfOp:(id)a0;
- (void)doHandleFinalResultOfOp:(id)a0 responseDict:(id)a1 response:(id)a2 responseErr:(id)a3 netErr:(id)a4 withLoggerItem:(id)a5;
- (void)onFinalResultOfOp:(id)a0 responseDict:(id)a1 response:(id)a2 responseErr:(id)a3 netErr:(id)a4;
- (void)addObserverForOp:(id)a0 withComponent:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
