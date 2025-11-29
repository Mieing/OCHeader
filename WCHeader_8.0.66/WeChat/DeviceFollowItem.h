@class NSString;

@interface DeviceFollowItem : MMObject <PBCoding>

@property (copy, nonatomic) NSString *nsUserName;
@property (nonatomic) unsigned int uiStep;
@property (nonatomic) unsigned int uiIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nsUserName;
+ (void)PBArrayAdd_uiStep;
+ (void)PBArrayAdd_uiIndex;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
