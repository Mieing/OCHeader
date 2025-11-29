@class NSString, NSArray, UIImage, NSMutableArray, NSNumber;
@protocol ACCServiceProvideRecipe;

@interface AWEIMCameraPublishServiceImpls : NSObject <AWEPublishTaskMessage, AWEUserMessage, AFDMomentCameraPublishService>

@property (retain, nonatomic) NSMutableArray *samplingFrames;
@property (nonatomic) BOOL needUploadOriginalFrames;
@property (retain, nonatomic) NSString *currentCreateID;
@property (nonatomic) double currentTaskBeginTime;
@property (retain, nonatomic) NSMutableArray *p_publishQueue;
@property (nonatomic) long long retryCount;
@property (nonatomic) BOOL shouldPausePublish;
@property (weak, nonatomic) id<ACCServiceProvideRecipe> serviceProvider;
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

- (void)configResolver:(id)a0;
- (long long)closeFriendsCount;
- (id)p_publishShootWay;
- (void)updateSamplingFrames:(id)a0;
- (void)updateNeedUploadOriginalFrames:(BOOL)a0;
- (id)publishStatus;
- (void)publishPublishModel:(id)a0 completion:(id /* block */)a1;
- (void)setPartOfVisibleUsersWith:(id)a0;
- (void)publishImage:(id)a0 originalImage:(id)a1 completion:(id /* block */)a2;
- (void)publishVideoWithPath:(id)a0 size:(struct CGSize { double x0; double x1; })a1 coverImage:(id)a2 completion:(id /* block */)a3;
- (void)retryDraftModel:(id)a0;
- (void).cxx_destruct;

@end
