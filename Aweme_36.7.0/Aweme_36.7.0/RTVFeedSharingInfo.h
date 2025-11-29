@class NSString, NSNumber, RTVFeedRoomSettings;

@interface RTVFeedSharingInfo : JSONModel

@property (copy, nonatomic) NSString *sharingID;
@property (nonatomic) long long sharing_version;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *sharingUserID;
@property (nonatomic) long long feedShareRoomFeature;
@property (retain, nonatomic) RTVFeedRoomSettings *roomSettings;
@property (retain, nonatomic) NSNumber *disableHostSliding;
@property (retain, nonatomic) NSNumber *disableGuestSliding;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (BOOL)shareOwnerIsOldVersionOfNoSupportSwitchShare;
- (void)setRoomSettingsWithNSString:(id)a0;
- (id)JSONObjectForRoomSettings;
- (void).cxx_destruct;

@end
