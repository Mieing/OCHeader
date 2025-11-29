@class UIImage, MMFinderLiveTaskId, MMFinderLiveAudioModeBackgroundUploadModel, FinderObjectEventDesc, NSMutableArray, FinderLiveTagInfo, WCFinderUploadTask, WCFinderDataItem, NSString, WCFinderLiveStarterReporter, NSData, CContact, MMFinderLiveCreateImageSpamCheckItem, WCFinderLiveShareItem;

@interface MMFinderLiveCreateParamsModel : MMLiveCreateParamsModel

@property (nonatomic) unsigned int finderLiveMode;
@property (nonatomic) unsigned int finderLiveSubMode;
@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderLiveShareItem *shareItem;
@property (nonatomic) BOOL isLiveCoverImageUpdated;
@property (nonatomic) BOOL useFinderHeadAsCoverImage;
@property (retain, nonatomic) WCFinderUploadTask *uploadTask;
@property (retain, nonatomic) WCFinderLiveStarterReporter *starterReporter;
@property (nonatomic) unsigned int chargeFlag;
@property (nonatomic) unsigned int chargeUnitPriceInWecoin;
@property (nonatomic) long long purchaseLivePreviewType;
@property (nonatomic) unsigned int trialDurationTime;
@property (retain, nonatomic) NSMutableArray *freeOfChargeChatroomIdList;
@property (retain, nonatomic) NSMutableArray *freeOfChargeUsernameList;
@property (retain, nonatomic) NSMutableArray *freeOfChargeRosterIdsList;
@property (retain, nonatomic) NSMutableArray *freeOfChargeFriendLabelList;
@property (nonatomic) BOOL isMemberFree;
@property (retain, nonatomic) FinderLiveTagInfo *liveTagInfo;
@property (nonatomic) long long visibilityMode;
@property (retain, nonatomic) NSMutableArray *visibilityFileIdLists;
@property (retain, nonatomic) NSMutableArray *visibilityChatRoomIdLists;
@property (retain, nonatomic) NSMutableArray *visibilityusernameLists;
@property (retain, nonatomic) NSMutableArray *visibilityFriendLabelList;
@property (nonatomic) BOOL isMiniGameLive;
@property (nonatomic) unsigned int ackSpamMsg;
@property (retain, nonatomic) NSData *spamCheckInfo;
@property (retain, nonatomic) UIImage *coverImg;
@property (retain, nonatomic) NSString *coverPath;
@property (retain, nonatomic) UIImage *headImg;
@property (retain, nonatomic) NSString *headPath;
@property (retain, nonatomic) NSString *noticeId;
@property (retain, nonatomic) CContact *fromGroupContact;
@property (readonly, nonatomic) BOOL isFromGroupVisibleOnly;
@property (retain, nonatomic) MMFinderLiveAudioModeBackgroundUploadModel *audioModeBackgroundUploadModel;
@property (retain, nonatomic) MMFinderLiveCreateImageSpamCheckItem *coverImageSpamCheckItem;
@property (retain, nonatomic) MMFinderLiveCreateImageSpamCheckItem *headImageSpamCheckItem;
@property (nonatomic) int liveMode;
@property (retain, nonatomic) NSMutableArray *lastLiveCoverImgs;
@property (nonatomic) BOOL isLandscapeLive;
@property (nonatomic) unsigned int notificationmsgtriggertype;
@property (nonatomic) unsigned int gameLiveStreamType;
@property (retain, nonatomic) NSString *descriptionExtend;
@property (nonatomic) long long createLivePageMode;
@property (retain, nonatomic) FinderObjectEventDesc *finderObjectEventDesc;
@property (retain, nonatomic) NSData *createLiveBubbleBuffer;
@property (nonatomic) unsigned int createLiveScene;

- (id)description;
- (void).cxx_destruct;

@end
