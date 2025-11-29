@class SongListInfo, LiveWeappJumpInfo, NSMutableArray, NSString, FinderLiveStickerBubble, FinderLiveNextLiveNotificationInfo, FinderLiveModModifyLiveCoverImageResponse, NSArray, LiveRoomImg, FinderLiveStickerFont, FinderLiveTagInfo, FinderLiveErrorPage, MMFinderLiveContentVM, WCFinderStarterLiveViewModel, NSData, WCFinderCreateLivePrepareResponseModel, FinderLiveUserAttrUserSetting, FinderJumpInfo, MMLiveBeautyResourcesDescriptor, SpamRisk, FinderLivePromotionEntrance, PageModePoiTopicControlInfo, FinderLiveAgreementInfo, FinderContactLiveInfo, FinderLiveGuideInfo;

@interface MMFinderLiveStartParamsModel : NSObject

@property (retain, nonatomic) NSArray *liveModeControlInfoArray;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSArray *liveNoticeList;
@property (retain, nonatomic) MMFinderLiveContentVM *recoverVM;
@property (nonatomic) unsigned int userFlag;
@property (retain, nonatomic) NSString *realnameAuthUrl;
@property (nonatomic) unsigned int liveGlobalFlag;
@property (retain, nonatomic) NSArray *allTags;
@property (retain, nonatomic) FinderLiveTagInfo *currentTag;
@property (retain, nonatomic) NSMutableArray *visibilityFileList;
@property (nonatomic) unsigned int maxVisibilityChatroomCount;
@property (nonatomic) unsigned int maxVisibilityFriendContactCount;
@property (nonatomic) unsigned int maxRedPacketChatroomCount;
@property (nonatomic) long long redPacketChatroomSelectionStyle;
@property (retain, nonatomic) SpamRisk *spamJumpInfo;
@property (nonatomic) unsigned int shoppingNotAvailableFlag;
@property (retain, nonatomic) NSString *anchorUsername;
@property (nonatomic) unsigned int randomConnectMicWaitTime;
@property (retain, nonatomic) FinderContactLiveInfo *contactLiveInfo;
@property (retain, nonatomic) FinderLiveUserAttrUserSetting *userSetting;
@property (retain, nonatomic) SongListInfo *songListInfo;
@property (retain, nonatomic) LiveWeappJumpInfo *weappJumpInfo;
@property (retain, nonatomic) FinderLivePromotionEntrance *promotionEntrance;
@property (retain, nonatomic) LiveRoomImg *liveRoomImages;
@property (retain, nonatomic) WCFinderStarterLiveViewModel *starterViewModel;
@property (nonatomic) unsigned int anchorPushMode;
@property (retain, nonatomic) FinderJumpInfo *creatorCenterEntrance;
@property (retain, nonatomic) FinderJumpInfo *creatorCenterEntrance2;
@property (retain, nonatomic) FinderLiveErrorPage *createLiveErrorPage;
@property (retain, nonatomic) FinderLiveModModifyLiveCoverImageResponse *liveCoverImgModifyInfo;
@property (retain, nonatomic) NSData *createLiveToken;
@property (retain, nonatomic) FinderLiveStickerBubble *stickerTextTemplatesEntities;
@property (retain, nonatomic) FinderLiveStickerFont *stickerTextTemplateFontsEntities;
@property (retain, nonatomic) MMLiveBeautyResourcesDescriptor *beautyResourcesDescriptor;
@property (retain, nonatomic) NSArray *resourcePackages;
@property (retain, nonatomic) FinderLiveGuideInfo *liveGuideInfo;
@property (retain, nonatomic) WCFinderCreateLivePrepareResponseModel *responseModel;
@property (nonatomic) long long createLivePageMode;
@property (nonatomic) BOOL canUseCreateLivePageSimpleMode;
@property (retain, nonatomic) PageModePoiTopicControlInfo *pageModePoiTopicControlInfo;
@property (retain, nonatomic) FinderLiveNextLiveNotificationInfo *nextLiveNoticeInfo;
@property (retain, nonatomic) FinderLiveAgreementInfo *liveAgreementInfo;
@property (nonatomic) int startControllerSwitchFlag;
@property (retain, nonatomic) NSData *createLivePrepareBuffer;

- (id)initWithPrepareResponseModel:(id)a0;
- (void).cxx_destruct;

@end
