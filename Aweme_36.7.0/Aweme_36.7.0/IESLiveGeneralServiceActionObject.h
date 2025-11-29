@class NSString, NSMapTable, NSMutableDictionary, NSLock;

@interface IESLiveGeneralServiceActionObject : NSObject

@property (retain, nonatomic) NSString *actionName;
@property (retain, nonatomic) NSMapTable *weakMapTable;
@property (retain, nonatomic) NSMutableDictionary *methodMap;
@property (retain, nonatomic) NSLock *lock;

- (void)buildMethodMapWithProtocol:(id)a0;
- (void)fallbackUnrecognizedSelector:(SEL)a0;
- (void)bindActionWithName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)registerService:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
