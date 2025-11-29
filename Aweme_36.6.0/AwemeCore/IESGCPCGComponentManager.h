@class NSLock, NSMutableArray, NSString;

@interface IESGCPCGComponentManager : NSObject <IESGCPDIContextSubscriber>

@property (retain, nonatomic) NSMutableArray *comps;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) BOOL attached;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void).cxx_destruct;
- (id)components;
- (id)init;
- (void)destroy;
- (void)addComponent:(id)a0;

@end
