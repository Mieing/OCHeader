@class NSArray;

@interface MMFinderLiveShareSettingResult : NSObject

@property (nonatomic) long long currentVisibilityMode;
@property (nonatomic) int currentLiveMode;
@property (retain, nonatomic) NSArray *selectedVisibleFileLists;
@property (retain, nonatomic) NSArray *selectedTagNameList;
@property (retain, nonatomic) NSArray *orignalContactList;
@property (retain, nonatomic) NSArray *visibilityContactChatRoomIdList;
@property (retain, nonatomic) NSArray *visibilityContactUsernameList;
@property (nonatomic) long long purchaseLivePreviewType;
@property (nonatomic) unsigned int trialTimeHour;
@property (nonatomic) unsigned int trialTimeMinute;
@property (nonatomic) unsigned int priceInWecoin;
@property (retain, nonatomic) NSArray *freeContactChatroomList;
@property (retain, nonatomic) NSArray *freeContactUsernameList;
@property (retain, nonatomic) NSArray *freeContactListForDigestDisplay;
@property (retain, nonatomic) NSArray *selectedFreeFileList;
@property (retain, nonatomic) NSArray *selectedFreeTagNameList;

+ (unsigned long long)transferSelectModeFromVisibilityMode:(long long)a0 liveMode:(int)a1;

- (void).cxx_destruct;

@end
