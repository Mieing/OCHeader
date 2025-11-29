@class NSString, NSMutableArray;

@interface ChatLogRawMediaTaskInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long localID;
@property (nonatomic) unsigned long long taskSize;
@property (nonatomic) unsigned long long taskType;
@property (retain, nonatomic) NSMutableArray *innerTaskArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_localID;
+ (void)PBArrayAdd_taskSize;
+ (void)PBArrayAdd_taskType;
+ (void)PBArrayAdd_innerTaskArray;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
