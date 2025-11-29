@class NSString, IRISDataStorage;
@protocol IRISContext;

@interface IRISDataStorageManager : NSObject <IRISModule> {
    IRISDataStorage *_p0;
    IRISDataStorage *_p1;
    IRISDataStorage *_p2;
}

@property (weak, nonatomic) id<IRISContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)defaults;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)suspend;
- (id)primary;
- (void)resume;
- (id)secondary;

@end
