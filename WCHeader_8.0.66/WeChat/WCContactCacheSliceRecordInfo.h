@class NSString, NSMutableSet;

@interface WCContactCacheSliceRecordInfo : NSObject <PBCoding>

@property (nonatomic) unsigned int recordTime;
@property (retain, nonatomic) NSMutableSet *setUserName;
@property (nonatomic) BOOL isHadNotSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_recordTime;
+ (void)PBArrayAdd_setUserName;
+ (void)PBArrayAdd_isHadNotSave;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
