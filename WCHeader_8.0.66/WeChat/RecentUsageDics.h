@class NSString, NSMutableDictionary;

@interface RecentUsageDics : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *uinqueIdAndlastUsedTimeWeApp;
@property (retain, nonatomic) NSMutableDictionary *uinqueIdAndlastUsedTimeApp;
@property (retain, nonatomic) NSMutableDictionary *uinqueIdAndlastUsedTimeDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_uinqueIdAndlastUsedTimeWeApp;
+ (void)PBArrayAdd_uinqueIdAndlastUsedTimeApp;
+ (void)PBArrayAdd_uinqueIdAndlastUsedTimeDevice;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
