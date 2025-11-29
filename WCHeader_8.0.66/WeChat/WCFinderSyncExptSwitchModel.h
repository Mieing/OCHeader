@class NSString, NSMutableDictionary, NSArray;

@interface WCFinderSyncExptSwitchModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *finderInitExptBufferDic;
@property (copy, nonatomic) NSString *testExptString;
@property (nonatomic) long long timelineTabCacheFeedValue;
@property (nonatomic) BOOL finderMentionEntranceIndependent;
@property (nonatomic) BOOL isNewLifeReserveLookRedDotSwitchOpened;
@property (nonatomic) unsigned long long seeBrowseLongVideoSwitch;
@property (nonatomic) unsigned long long enterStreamTipsSwitch;
@property (nonatomic) unsigned long long friendBubbleShowSec;
@property (nonatomic) BOOL isK1KUniformReddotEnabled;
@property (retain, nonatomic) NSArray *finderGetrelatedlistSupportBackupScenes;
@property (nonatomic) BOOL reddotPersonalExposeClearSwitch;
@property (nonatomic) BOOL privateRedDotUseFinderSvr;
@property (readonly, nonatomic) BOOL isNewLifeEntryOpened;
@property (readonly, nonatomic) BOOL isNewLifeTagStreamOpened;
@property (readonly, nonatomic) BOOL isNewLifePhotoAtSecondTab;
@property (nonatomic) BOOL allowComboLike;

- (id)initWithExptBufferDic:(id)a0;
- (void)updateFinderInitExptBufferDic:(id)a0;
- (void)loadSyncExptSwitch;
- (long long)getIntExptCmdId:(long long)a0 keyName:(id)a1 defaultValue:(long long)a2;
- (BOOL)getBoolExptCmdId:(long long)a0 keyName:(id)a1;
- (id)getExptValueByCmdId:(long long)a0 keyName:(id)a1;
- (BOOL)getPureIsNewLifeEntryOpened;
- (BOOL)getPureIsNewLifeTagStreamOpened;
- (void).cxx_destruct;

@end
