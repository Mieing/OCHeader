@class NSArray, NSString;

@interface HTSBootNodeGroup : NSObject <HTSBootNode>

@property (retain, nonatomic) NSArray *syncList;
@property (retain, nonatomic) NSArray *asyncList;
@property (nonatomic) BOOL canRunned;
@property (readonly) BOOL isMainThread;
@property (readonly) unsigned int qos;
@property (readonly) double delayDuration;
@property (readonly) BOOL enabled;
@property (readonly) NSString *uniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSyncList:(id)a0 asyncList:(id)a1;
- (void).cxx_destruct;
- (void)run;

@end
