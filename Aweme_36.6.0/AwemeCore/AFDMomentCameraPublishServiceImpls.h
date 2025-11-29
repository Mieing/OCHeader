@class NSNumber, NSString, NSArray, CMCPublishModel, AWEAwemeModel, NSMutableArray, UIImage;
@protocol AFDMomentCameraPerformanceTrackService, ACCServiceProvideRecipe, CECMomentCameraSwitchTabService, CECDraftService;

@interface AFDMomentCameraPublishServiceImpls : NSObject <AWEPublishTaskMessage, AWEUserMessage, AFDMomentCameraPublishService>

@property (retain, nonatomic) CMCPublishModel *currentPublishingModel;
@property (retain, nonatomic) AWEAwemeModel *currentPublishingAwemeModel;
@property (retain, nonatomic) NSMutableArray *samplingFrames;
@property (nonatomic) BOOL needUploadOriginalFrames;
@property (nonatomic) BOOL currentIsInFestivalPublishing;
@property (retain, nonatomic) NSString *currentCreateID;
@property (nonatomic) double currentTaskBeginTime;
@property (nonatomic) long long retryCount;
@property (nonatomic) long long showFailedPushCount;
@property (nonatomic) BOOL shouldPausePublish;
@property (weak, nonatomic) id<ACCServiceProvideRecipe> serviceProvider;
@property (weak, nonatomic) id<CECDraftService> draftService;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (weak, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (retain, nonatomic) NSMutableArray *p_publishQueue;
@property (retain, nonatomic) NSMutableArray *p_publishingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isPublishingMoment;
@property (retain, nonatomic) UIImage *finalToReviewOriginalImage;
@property (retain, nonatomic) NSMutableArray *finalToReviewOriginalImages;
@property (retain, nonatomic) UIImage *brushContentImage;
@property (copy, nonatomic) NSString *framesTaskID;
@property (copy, nonatomic) NSString *imageText;
@property (retain, nonatomic) NSNumber *activityVideoType;
@property (copy, nonatomic) NSString *activityExtraJson;
@property (readonly, nonatomic) NSArray *publishQueue;
@property (nonatomic) BOOL isMaskType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *widgetItemID;

+ (id)sharedInstance;

- (void)task:(id)a0 willAppendWithInfo:(id)a1;
- (void)task:(id)a0 didWholeEndWithResult:(long long)a1 error:(id)a2;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)p_todayPublishTimesRuleAddCountIfNeeded;
- (void)publishNext:(BOOL)a0;
- (void)p_notifyPublishModelDidChange:(id)a0;
- (long long)publishFeedTypeFromPublishModel:(id)a0;
- (unsigned long long)assetTypeFromPublishModel:(id)a0;
- (id)createFakeAwemeModelFromPublishModel:(id)a0;
- (unsigned long long)publishLandingTypeFrom:(id)a0;
- (void)landingToFriendsPageAndShowingSkylightAfterPublish;
- (void)landingToFriendsPageAndInsertFeedAfterPublish:(id)a0;
- (void)landingToMessagePageAndShowingSkylightAfterPublish;
- (void)sendDraftDidChangeNotificationForPublishModel:(id)a0;
- (void)landingToSpecialPageAfterPublishIfNeeded:(id)a0;
- (void)trackPublishSuccess:(id)a0;
- (void)p_cleanupWithDraftID:(id)a0;
- (void)configResolver:(id)a0;
- (long long)closeFriendsCount;
- (id)p_publishShootWay;
- (void)updateSamplingFrames:(id)a0;
- (void)updateNeedUploadOriginalFrames:(BOOL)a0;
- (id)publishStatus;
- (long long)currentPrivacyStatus;
- (BOOL)isSupportFriendsVisibleForMoment;
- (BOOL)isSupportFriendsVisibleForNotes;
- (void)publishPublishModel:(id)a0 completion:(id /* block */)a1;
- (void)setPartOfVisibleUsersWith:(id)a0;
- (BOOL)canLandingForPublishModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
