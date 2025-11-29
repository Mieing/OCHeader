@class NSString;

@interface RecommendPrivcyWrap : MMObject <PBCoding>

@property (nonatomic) unsigned int fullHeaderFirstShowTime;
@property (nonatomic) unsigned int briefHeaderFirstShowTime;
@property (nonatomic) unsigned int rejectFullHeaderTime;
@property (nonatomic) BOOL isBriefHeaderOperated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_fullHeaderFirstShowTime;
+ (void)PBArrayAdd_briefHeaderFirstShowTime;
+ (void)PBArrayAdd_rejectFullHeaderTime;
+ (void)PBArrayAdd_isBriefHeaderOperated;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;

@end
