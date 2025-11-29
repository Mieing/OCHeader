@class NSArray, NSMutableArray;

@interface MMFinderLivePaymentVisivilitySettingInfo : MMFinderLiveVisivilitySettingInfo

@property (nonatomic) long long purchaseLivePreviewType;
@property (nonatomic) unsigned int curPriceInWecoin;
@property (nonatomic) unsigned int curTrialTimeHour;
@property (nonatomic) unsigned int curTrialTimeMinute;
@property (nonatomic) BOOL hasTrialTimeManuallyModified;
@property (retain, nonatomic) NSMutableArray *chooseFreeContactChatroomList;
@property (retain, nonatomic) NSMutableArray *chooseFreeContactUsernameList;
@property (retain, nonatomic) NSArray *chooseFreeContactListForDigestDisplay;
@property (retain, nonatomic) NSMutableArray *selectedFreeFileLists;
@property (retain, nonatomic) NSMutableArray *selectedFreeTagNameList;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyInfosFromSettingInfo:(id)a0;
- (void)recoverInfosToInitParam:(id)a0;
- (BOOL)isSettingEnabled;
- (id)getDescriptionForCurrentSetting;
- (id)getDefaultDescription;
- (id)getFormatTrialTimeDesc;
- (BOOL)shouldDisplayLiveMemberAndSuperfanFree;
- (void).cxx_destruct;

@end
