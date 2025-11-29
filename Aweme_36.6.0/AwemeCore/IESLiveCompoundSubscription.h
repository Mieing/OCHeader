@class NSString, NSMutableArray;

@interface IESLiveCompoundSubscription : NSObject <IESLiveCompoundSubscription>

@property (retain, nonatomic) NSMutableArray *allSubscription;
@property (retain, nonatomic) NSMutableArray *allRootSubscription;
@property (getter=isDisposed) BOOL disposed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)compoundDisposable;

- (void)addSubscription:(id)a0;
- (void)removeSubscription:(id)a0;
- (void)addRootSubscription:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dispose;

@end
