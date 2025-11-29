@class NSMutableArray;

@interface MMFinderLiveSettingVisivilitySettingInfo : MMFinderLiveVisivilitySettingInfo

@property (retain, nonatomic) NSMutableArray *manualContactChatroomList;
@property (retain, nonatomic) NSMutableArray *manualContactUsernameList;
@property (retain, nonatomic) NSMutableArray *manualTagList;
@property (retain, nonatomic) NSMutableArray *manualFileList;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyInfosFromSettingInfo:(id)a0;
- (void)recoverInfosToInitParam:(id)a0;
- (id)getDescriptionForCurrentSetting;
- (id)description;
- (void).cxx_destruct;

@end
