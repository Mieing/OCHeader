@class NSString, NSMutableArray;

@interface MessageBatchSendRecord : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *localIdArr;
@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_localIdArr;
+ (void)PBArrayAdd_scene;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
