@class NSString;

@interface WCFinderUserMessage : NSObject <PBCoding>

@property (nonatomic) unsigned long long originFansCount;
@property (nonatomic) unsigned long long followingCount;
@property (nonatomic) unsigned long long addFansCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_originFansCount;
+ (void)PBArrayAdd_followingCount;
+ (void)PBArrayAdd_addFansCount;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
