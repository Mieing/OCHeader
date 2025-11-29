@class WCFinderCompleteHandler, NSString, NSMutableDictionary, NSMutableArray;

@interface WCFinderJSAPIFeedListBehavior : NSObject

@property (copy, nonatomic) id /* block */ sendTemplateEvent;
@property (retain, nonatomic) NSMutableArray *completeActions;
@property (retain, nonatomic) NSMutableDictionary *bckInfo;
@property (nonatomic) BOOL delayCompleteCallback;
@property (retain, nonatomic) NSString *liteAppId;
@property (nonatomic) BOOL allowTopPull;
@property (nonatomic) BOOL allowInfiniteTopPull;
@property (nonatomic) BOOL reportFeedRead;
@property (nonatomic) BOOL feedFocusChangeNotify;
@property (retain, nonatomic) WCFinderCompleteHandler *completeHandler;
@property (nonatomic) BOOL fromSearchTemplate;

+ (id)behaviorWithParams:(id)a0 event:(id)a1;
+ (id)behaviorDict:(id)a0;
+ (BOOL)boolValueForKey:(id)a0 inDict:(id)a1;

- (BOOL)delayCallResultCallback;
- (void)notifyTemplate:(id)a0 params:(id)a1;
- (id)createPlugin;
- (void)addCompleteAction:(id /* block */)a0;
- (void)onComplete;
- (void)updateBckInfo:(id /* block */)a0;
- (void).cxx_destruct;

@end
