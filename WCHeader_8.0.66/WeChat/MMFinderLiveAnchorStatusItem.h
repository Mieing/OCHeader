@class NSString, MicSetting_PurchaseMicSetting, FinderLiveLayerAnchorVerificationShowInfo, MMLiveReplaySetting;

@interface MMFinderLiveAnchorStatusItem : MMLiveAnchorStatusItem

@property unsigned long long timeMs;
@property unsigned long long pausedAccumulatedTime;
@property (copy) NSString *audiencePauseWording;
@property (retain) FinderLiveLayerAnchorVerificationShowInfo *anchorVerificationShowInfo;
@property unsigned long long layerDisplayType;
@property (retain) NSString *focusedMicSdkUserId;
@property (retain) NSString *makeupsModelType;
@property (retain) NSString *detailSetList;
@property (retain, nonatomic) MicSetting_PurchaseMicSetting *purchaseMicSetting;
@property (nonatomic) unsigned long long pkSettingFlag;
@property (retain, nonatomic) MMLiveReplaySetting *liveReplaySetting;

- (id)initWithFinderExtLiveInfo:(id)a0 layerDisplayInfo:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getAnchorStatusBuffer;
- (BOOL)fromLiveExtInfo:(id)a0;
- (BOOL)fromLiveLayerDisplayInfo:(id)a0;
- (BOOL)isPausedLayerDisplayed;
- (void)updateDisplayInfoFromServer:(id)a0;
- (void).cxx_destruct;

@end
