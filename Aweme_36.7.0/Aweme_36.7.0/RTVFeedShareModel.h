@class NSString, RTVFeedCommand, RTVFeedRoomSettings, NSNumber, RTVRoomTextChatInfo;
@protocol Optional;

@interface RTVFeedShareModel : JSONModel <RTVXRInteractionModelProtocol>

@property (copy, nonatomic) NSString<Optional> *sharingFromUserID;
@property (copy, nonatomic) NSString<Optional> *sharingID;
@property (copy, nonatomic) RTVFeedCommand<Optional> *feedListCmd;
@property (copy, nonatomic) NSString<Optional> *version;
@property (nonatomic) long long syncVersion;
@property (nonatomic) long long sharing_version;
@property (nonatomic) long long roomFeature;
@property (nonatomic) long long source;
@property (retain, nonatomic) RTVFeedRoomSettings<Optional> *roomSettings;
@property (retain, nonatomic) RTVRoomTextChatInfo *textChatInfo;
@property (copy, nonatomic) NSString *sessionID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *disableHostSliding;
@property (retain, nonatomic) NSNumber *disableGuestSliding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (BOOL)shareOwnerIsOldVersionOfNoSupportSwitchShare;
- (void)updateDisableHostSliding:(id)a0;
- (void)updateDisableGuestSliding:(id)a0;
- (id)initWithOwnerID:(id)a0 roomFeature:(long long)a1;
- (void)updateFeedSource:(long long)a0;
- (void)updateSwitchShareSupport:(BOOL)a0;
- (BOOL)mergeWithModel:(id)a0 strategy:(long long)a1;
- (void)updateRoomSettings:(id)a0;
- (id)initWithVersion:(id)a0 ownerID:(id)a1 roomFeature:(long long)a2 supportSwitchShare:(BOOL)a3;
- (void)updateTextChatInfo:(id)a0;
- (void)setFeedListCmdWithNSString:(id)a0;
- (id)JSONObjectForFeedListCmd;
- (void)setRoomSettingsWithNSString:(id)a0;
- (id)JSONObjectForRoomSettings;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)interactionType;
- (void)updateVersion:(id)a0;
- (id)ownerUserID;
- (void)updateSessionID:(id)a0;

@end
