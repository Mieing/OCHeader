@class NSArray, NSMutableArray;

@interface MMFinderLiveTestLivePartialVisivilitySettingInfo : MMFinderLiveVisivilitySettingInfo

@property (retain, nonatomic) NSArray *originalChoosedContactList;
@property (retain, nonatomic) NSMutableArray *chooseContactChatroomList;
@property (retain, nonatomic) NSMutableArray *chooseContactUsernameList;
@property (retain, nonatomic) NSMutableArray *selectedVisibleFileLists;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyInfosFromSettingInfo:(id)a0;
- (void)recoverInfosToInitParam:(id)a0;
- (BOOL)isSettingEnabled;
- (id)getDescriptionForCurrentSetting;
- (void).cxx_destruct;

@end
