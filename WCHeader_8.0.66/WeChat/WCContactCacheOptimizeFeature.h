@class NSString;

@interface WCContactCacheOptimizeFeature : NSObject <PBCoding>

@property (nonatomic) unsigned int groupLastActiveTimeCount;
@property (nonatomic) unsigned int groupMySelfLastActiveTimeCount;
@property (nonatomic) unsigned int groupMemberCount;
@property (nonatomic) unsigned int groupUnReadMsgCount;
@property (nonatomic) unsigned int groupFriendsCount;
@property (nonatomic) unsigned int myRecentMsgCount;
@property (nonatomic) unsigned int isMute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_groupLastActiveTimeCount;
+ (void)PBArrayAdd_groupMySelfLastActiveTimeCount;
+ (void)PBArrayAdd_groupMemberCount;
+ (void)PBArrayAdd_groupUnReadMsgCount;
+ (void)PBArrayAdd_groupFriendsCount;
+ (void)PBArrayAdd_myRecentMsgCount;
+ (void)PBArrayAdd_isMute;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
