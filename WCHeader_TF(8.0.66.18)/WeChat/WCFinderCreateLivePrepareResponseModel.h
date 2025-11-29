@class LiveWeappJumpInfo, FinderLiveGuideInfo, FinderLiveAnchorQuestEntrance, MMFinderLiveGestureCreateLivePrepareModel, NSMutableArray, FinderLiveStickerBubble, FinderLivePromptInfo, NSString, FinderLiveModModifyLiveCoverImageResponse, FinderLiveNextLiveNotificationInfo, WCFinderDataItem, NSArray, FinderLiveMicInfo, FinderLiveStickerFont, FinderLiveTagInfo, LiveRoomImg, FinderLiveErrorPage, FinderLiveKtvSettingsInfo, NSData, MMLiveKtvResourcesDescriptor, FinderLiveUserAttrUserSetting, FinderJumpInfo, FinderLiveGamePlayTogetherEntranceInfo, MMLiveBeautyResourcesDescriptor, SpamRisk, FinderLivePromotionEntrance, PageModePoiTopicControlInfo, FinderLiveAgreementInfo, FinderContactLiveInfo, SongListInfo;

@interface WCFinderCreateLivePrepareResponseModel : NSObject

@property (retain, nonatomic) NSArray *liveModeControlInfoArray;
@property (retain, nonatomic) FinderLiveMicInfo *liveMicInfo;
@property (retain, nonatomic) NSArray *liveNoticeList;
@property (retain, nonatomic) WCFinderDataItem *recoverDataItem;
@property (nonatomic) unsigned int userFlag;
@property (retain, nonatomic) NSString *realnameAuthUrl;
@property (nonatomic) unsigned int liveGlobalFlag;
@property (retain, nonatomic) NSArray *fullTagInfos;
@property (retain, nonatomic) FinderLiveTagInfo *lastSelectTag;
@property (retain, nonatomic) NSMutableArray *visibilityFileList;
@property (nonatomic) unsigned int maxVisibilityChatroomCount;
@property (nonatomic) unsigned int maxVisibilityFriendContactCount;
@property (nonatomic) unsigned int maxRedPacketChatroomCount;
@property (nonatomic) long long redPacketChatroomSelectionStyle;
@property (retain, nonatomic) SpamRisk *spamRiskInfo;
@property (nonatomic) unsigned int shoppingNotAvailableFlag;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int randomConnectMicWaitTime;
@property (retain, nonatomic) FinderContactLiveInfo *contactLiveInfo;
@property (retain, nonatomic) FinderLiveUserAttrUserSetting *userSetting;
@property (retain, nonatomic) SongListInfo *songListInfo;
@property (retain, nonatomic) LiveWeappJumpInfo *weappJumpInfo;
@property (retain, nonatomic) LiveRoomImg *liveRoomImages;
@property (retain, nonatomic) FinderLivePromptInfo *promptInfo;
@property (retain, nonatomic) FinderJumpInfo *opPromptInfo;
@property (retain, nonatomic) FinderLivePromotionEntrance *promotionEntrance;
@property (retain, nonatomic) MMFinderLiveGestureCreateLivePrepareModel *gestureModel;
@property (nonatomic) unsigned int anchorPushMode;
@property (retain, nonatomic) FinderJumpInfo *creatorCenterEntrance;
@property (retain, nonatomic) FinderJumpInfo *creatorCenterEntrance2;
@property (retain, nonatomic) FinderLiveModModifyLiveCoverImageResponse *liveCoverImgModifyInfo;
@property (retain, nonatomic) NSData *createLiveToken;
@property (retain, nonatomic) FinderLiveErrorPage *createLiveErrorPage;
@property (retain, nonatomic) FinderLiveStickerBubble *stickerTextTemplatesEntities;
@property (retain, nonatomic) FinderLiveStickerFont *stickerTextTemplateFontsEntities;
@property (retain, nonatomic) NSArray *resourcePackages;
@property (retain, nonatomic) MMLiveBeautyResourcesDescriptor *beautyResourcesDescriptor;
@property (retain, nonatomic) FinderJumpInfo *applyEligibilityJumpInfo;
@property (retain, nonatomic) FinderLiveGuideInfo *liveGuideInfo;
@property (retain, nonatomic) MMLiveKtvResourcesDescriptor *ktvResourcesDescriptor;
@property (retain, nonatomic) FinderLiveKtvSettingsInfo *ktvSettingsInfo;
@property (nonatomic) unsigned long long liveFunctionSwitchFlags;
@property (retain, nonatomic) FinderLiveAnchorQuestEntrance *anchorQuestEntance;
@property (nonatomic) BOOL enableDescExtend;
@property (nonatomic) long long createLivePageMode;
@property (nonatomic) BOOL canUseCreateLivePageSimpleMode;
@property (retain, nonatomic) PageModePoiTopicControlInfo *pageModePoiTopicControlInfo;
@property (retain, nonatomic) FinderLiveGamePlayTogetherEntranceInfo *gamePlayTogetherEntranceInfo;
@property (retain, nonatomic) FinderLiveNextLiveNotificationInfo *nextLiveNoticeInfo;
@property (retain, nonatomic) FinderLiveAgreementInfo *liveAgreementInfo;
@property (nonatomic) int startControllerSwitchFlag;
@property (retain, nonatomic) NSData *createLivePrepareBuffer;

- (void).cxx_destruct;

@end
