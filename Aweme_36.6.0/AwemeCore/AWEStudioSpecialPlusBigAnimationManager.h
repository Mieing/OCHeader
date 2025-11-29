@class NSString, AWEStudioSpecialPlusBigAnimationModel, UIImage, AWEStudioSpecialPlusBigAnimationStaticIconModel;

@interface AWEStudioSpecialPlusBigAnimationManager : NSObject <AWEStudioSpecialPlusBigAnimationManager>

@property (copy, nonatomic) id /* block */ bigAnimationDelayShowBlock;
@property (nonatomic) unsigned long long show;
@property (retain, nonatomic) AWEStudioSpecialPlusBigAnimationModel *animationModel;
@property (retain, nonatomic) AWEStudioSpecialPlusBigAnimationStaticIconModel *staticIconModel;
@property (retain, nonatomic) UIImage *staticImageIcon;
@property (nonatomic) long long showErrorType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)coldLanchRegisterObserver;
+ (void)downloadResouceWithSpecialPlusBigAnimationModel:(id)a0;
+ (BOOL)specialPlusBigAnimationIsValid;
+ (id)specialPlusBigAnimationAbsolutePath;
+ (id)specialPlusBigAnimationStaticImageIcon;
+ (void)recordShowSpecialPlusBigAnimation;
+ (void)recordShowSpecialPlusStaticImageView;
+ (void)specialPlusBigAnimationShowCompletedWithIsClicked:(BOOL)a0;
+ (double)sepecialPlusBigAnimationStaticImageShowDuration;
+ (BOOL)specialPlusBigAnimationCurrentShow;
+ (BOOL)specialPlusBigAnimationCurrentShowStaticImageView;
+ (BOOL)specialPlusBigAnimationIsCompleted;
+ (id)specialPlusBigAnimationJumpSchema;
+ (id)specialJumpSchemaStickerId;
+ (id)specialStaticStickerId;
+ (void)reciveDirectShowBigAnmiation:(id /* block */)a0;
+ (void)resetStaticIconData;
+ (BOOL)shouldClearBigAnimationOperationWithModel:(id)a0;
+ (void)clearBigAnimationOperationRecord;
+ (id)animationAbsoulteFilePath;
+ (id)specialPlusBigAnimationStaticImageAbsolutePath;
+ (id)animationStaticImageAbsoulteFilePath;
+ (id)getCacheDirectory;
+ (void)removeAnimationCacheWithFileName:(id)a0;
+ (id)sharedManager;

- (void)resetHasShownCountEverydayIfNeeded;
- (void)registerColdLanchObserver;
- (void)downloadGifIfNeed:(id)a0;
- (void)downloadStickerImageIfNeed:(id)a0;
- (BOOL)enableShowSpecialPlusBigAnimation;
- (BOOL)isInActivityTimeWithModel:(id)a0;
- (BOOL)shouldShowWithBigAnimationModel:(id)a0;
- (BOOL)specialPlusPineappleReversal;
- (BOOL)enableShowInActivityWithBigAnimationModel:(id)a0;
- (BOOL)enableShowDailyWithBigAnimationModel:(id)a0;
- (BOOL)hasColdLanch;
- (void)onReciveColdLanchEnterContentNotification;
- (void)fetchStaticIconListIfNeeded;
- (void)dealWithIconModels:(id)a0;
- (void)sendTrackerType:(id)a0 duration:(long long)a1 error:(id)a2;
- (id)initPrivate;
- (void).cxx_destruct;

@end
