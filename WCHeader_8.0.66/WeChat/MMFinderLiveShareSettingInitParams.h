@class NSArray, CContact;

@interface MMFinderLiveShareSettingInitParams : NSObject

@property (nonatomic) long long currentVisibilityMode;
@property (nonatomic) int currentLiveMode;
@property (nonatomic) int liveStartMode;
@property (retain, nonatomic) NSArray *allVisibilityFileList;
@property (retain, nonatomic) NSArray *selectedVisibleFileLists;
@property (retain, nonatomic) NSArray *selectedTagNameList;
@property (retain, nonatomic) NSArray *redPacketChooseIdList;
@property (retain, nonatomic) NSArray *visibilityContactChatRoomIdList;
@property (retain, nonatomic) NSArray *visibilityContactUsernameList;
@property (nonatomic) unsigned long long chatroomContactSelectLimit;
@property (nonatomic) unsigned long long contactFriendSelectLimit;
@property (retain, nonatomic) NSArray *freeContactChatroomList;
@property (retain, nonatomic) NSArray *freeContactUsernameList;
@property (retain, nonatomic) NSArray *freeContactListForDigestDisplay;
@property (retain, nonatomic) NSArray *selectedFreeFileList;
@property (retain, nonatomic) NSArray *selectedFreeTagNameList;
@property (nonatomic) unsigned int priceInWecoin;
@property (nonatomic) unsigned long long shareEntrySource;
@property (nonatomic) BOOL forceDarkMode;
@property (nonatomic) BOOL bindNotice;
@property (nonatomic) long long purchaseLivePreviewType;
@property (nonatomic) unsigned int trialTimeHour;
@property (nonatomic) unsigned int trialTimeMinute;
@property (retain, nonatomic) CContact *fromGroupContact;
@property (nonatomic) BOOL didVisibilityModeManullyChoosed;
@property (nonatomic) BOOL showVisiblitySettingEntrance;
@property (nonatomic) BOOL showFreeOfChargeSettingEntrance;
@property (nonatomic) unsigned int visibilityModeOptionStatus;

- (id)description;
- (id)updateWithFinderLiveVisibilityConfig:(id)a0;
- (id)updateWithFinderLiveVisibilityState:(id)a0;
- (void).cxx_destruct;

@end
