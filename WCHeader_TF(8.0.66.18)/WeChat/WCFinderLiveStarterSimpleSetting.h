@class NSString, NSDate;

@interface WCFinderLiveStarterSimpleSetting : NSObject <PBCoding>

@property (retain, nonatomic) NSDate *lastDisplayDate;
@property (nonatomic) long long showCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_lastDisplayDate;
+ (void)PBArrayAdd_showCount;
+ (void)initialize;
+ (id)getSimpleSetting;

- (id)getPBPropertyTable;
- (void)saveSimpleSettings;
- (BOOL)shouldDisplay;
- (void).cxx_destruct;

@end
