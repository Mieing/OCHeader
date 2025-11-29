@class NSString;

@interface MSEMessageMetaDataFailTaskItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *taskID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_sessionID;
+ (void)PBArrayAdd_taskID;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
