@class NSString;

@interface ACCBaseJob : NSObject <ACCJob>

@property (readonly, nonatomic) id /* block */ job;
@property (readonly, copy, nonatomic) NSString *debugContext;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, nonatomic) long long queuePriority;
@property (readonly, nonatomic) long long qualityOfService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jobWith:(id)a0 debugContext:(id)a1 job:(id /* block */)a2;
+ (id)jobWith:(id)a0 debugContext:(id)a1 queuePriority:(long long)a2 qualityOfService:(long long)a3 job:(id /* block */)a4;
+ (id)jobWith:(id)a0 debugContext:(id)a1 queuePriority:(long long)a2 job:(id /* block */)a3;

- (long long)pollMode;
- (id)main:(id)a0;
- (id)initWith:(id)a0 debugContext:(id)a1 queuePriority:(long long)a2 qualityOfService:(long long)a3 job:(id /* block */)a4;
- (void).cxx_destruct;

@end
