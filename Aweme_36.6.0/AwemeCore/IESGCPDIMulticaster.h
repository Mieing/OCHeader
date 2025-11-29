@class NSHashTable;

@interface IESGCPDIMulticaster : NSObject

@property (retain, nonatomic) NSHashTable *subscribers;

- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)addSubscriber:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
