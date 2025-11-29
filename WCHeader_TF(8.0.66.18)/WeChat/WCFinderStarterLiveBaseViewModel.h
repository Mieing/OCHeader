@class WCFinderLiveStartePublicModel;

@interface WCFinderStarterLiveBaseViewModel : NSObject

@property (retain, nonatomic) WCFinderLiveStartePublicModel *publicModel;

- (void)createLivePrepareSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (id)getPOIInfo;
- (void)setPOIInfo:(id)a0;
- (void)setCurrentTagInfo:(id)a0;
- (id)getCurrentTagInfo;
- (void)udpateDefaultDescriptionPromptWording;
- (void)setVisibilityMode:(long long)a0 liveMode:(int)a1 andIdList:(id)a2 chatRoomIdList:(id)a3 visibleUsernameList:(id)a4 selectedTagNameList:(id)a5;
- (void)setLiveChargableWithFlag:(int)a0 liveMode:(int)a1 chargeUnitPriceInWecoin:(unsigned int)a2 purchaseLivePreviewType:(long long)a3 trialTimeHour:(unsigned int)a4 trialTimeMinute:(unsigned int)a5 freeOfChargeChatroomIdList:(id)a6 freeOfChargeUsernameList:(id)a7 fullFreeOfChargeContactList:(id)a8 selectedFreeRosterList:(id)a9 selectedFreeTagList:(id)a10 memberFree:(BOOL)a11;
- (void)updateDataItemMedia:(id)a0;
- (void)udpateDataItemMediaType;
- (void)updateLiveShareItem:(id)a0;
- (void)updateLiveNoticeList:(id)a0;
- (void)updateLiveNoticeInfo;
- (void)updateVisibilityMode:(long long)a0;
- (id)toLiveCreateParamsModel;
- (id)genEventDescObject;
- (void)updateLiveBulletinInfo:(id)a0;
- (void)checkLoadSelfHeadImg;
- (void)updateCurrentLiveStarterVC:(id)a0;
- (id)getVisibilityFileIdLists;
- (id)getVisibilityChatRoomIdList;
- (id)getVisibilityUsernameList;
- (id)getSelectedTagNameList;
- (long long)getLiveMode;
- (long long)getLiveSubMode;
- (void).cxx_destruct;

@end
