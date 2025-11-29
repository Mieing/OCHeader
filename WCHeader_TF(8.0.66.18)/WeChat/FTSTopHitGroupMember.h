@class NSString, NSMutableSet;

@interface FTSTopHitGroupMember : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableSet *setMatchTypeStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_setMatchTypeStr;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
