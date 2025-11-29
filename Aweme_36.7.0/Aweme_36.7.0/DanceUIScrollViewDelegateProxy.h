@class NSString, NSArray, NSObject;
@protocol UIScrollViewDelegate;

@interface DanceUIScrollViewDelegateProxy : NSProxy <UIScrollViewDelegate> {
    NSObject<UIScrollViewDelegate> *_masterDelegate;
    NSArray *_slaveDelegates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyWithMasterDelegate:(id)a0 slaveDelegates:(id)a1;
+ (id)proxyWithMasterDelegate:(id)a0;

- (id)initWithMasterDelegate:(id)a0 slaveDelegates:(id)a1;
- (id)slaveDelegates;
- (id)masterDelegate;
- (void).cxx_destruct;
- (Class)class;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)self;
- (id)performSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;

@end
