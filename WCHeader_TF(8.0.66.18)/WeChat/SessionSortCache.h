@class NSString, NSMutableDictionary;

@interface SessionSortCache : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *dicUsrNameUntopTime;
@property (retain, nonatomic) NSMutableDictionary *dicUsrNameTopTime;
@property (retain, nonatomic) NSMutableDictionary *dicUsrNameSortTime;
@property (nonatomic) BOOL hasMergeTopFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicUsrNameTopTime;
+ (void)PBArrayAdd_dicUsrNameUntopTime;
+ (void)PBArrayAdd_hasMergeTopFlag;
+ (void)PBArrayAdd_dicUsrNameSortTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
