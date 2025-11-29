@class NSArray, NSMutableArray;

@interface MMFinderLiveVisivilitySettingInfo : NSObject <NSCopying>

@property (nonatomic) int currentLiveMode;
@property (nonatomic) long long currentVisibilityMode;
@property (retain, nonatomic) NSArray *allVisibilityFileList;
@property (retain, nonatomic) NSMutableArray *chooseContactChatroomList;
@property (retain, nonatomic) NSMutableArray *chooseContactUsernameList;
@property (retain, nonatomic) NSMutableArray *selectedTagNameList;
@property (retain, nonatomic) NSMutableArray *selectedVisibleFileLists;
@property (retain, nonatomic) NSMutableArray *requiredContacts;
@property (retain, nonatomic) NSMutableArray *disabledContacts;
@property (nonatomic) BOOL isModified;
@property (nonatomic) long long modeType;

+ (id)audienceFileListWithFileLists:(id)a0 allVisibilityFileList:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyInfosFromSettingInfo:(id)a0;
- (void)recoverInfosToInitParam:(id)a0;
- (BOOL)isSettingEnabled;
- (id)getSettingDescription;
- (id)getDescriptionForCurrentSetting;
- (id)getDefaultDescription;
- (id)audienceFileListWithFileLists:(id)a0;
- (void).cxx_destruct;

@end
