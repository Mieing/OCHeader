@class NSString;

@interface AWERelationListUserAdapterModel : AWEAdaptorUserModel

@property (nonatomic) long long blockStatus;
@property (nonatomic) BOOL isInDeactivateBufferPeriod;
@property (copy, nonatomic) NSString *alias;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (nonatomic) BOOL enableEditAlias;
@property (readonly, nonatomic) BOOL isLiving;
@property (nonatomic) BOOL isVSFirst;
@property (nonatomic) long long liveStatus;
@property (nonatomic) long long topStatus;
@property (nonatomic) BOOL isTop;
@property (nonatomic) BOOL isCache;
@property (nonatomic) BOOL isFriends;
@property (readonly, nonatomic) BOOL isVerifiedEnterprise;
@property (nonatomic) BOOL imShowEditBtn;

- (BOOL)hasLiveRoomData;

@end
