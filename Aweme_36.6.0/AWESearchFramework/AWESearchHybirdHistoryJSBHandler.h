@class NSPointerArray;

@interface AWESearchHybirdHistoryJSBHandler : NSObject

@property (retain, nonatomic) NSPointerArray *handlerStack;

+ (void)addJSBHandler:(id)a0;
+ (id)getTopJSBHandler;
+ (id)shareInstance;

- (void)addJSBHandler:(id)a0;
- (id)getTopJSBHandler;
- (void).cxx_destruct;

@end
