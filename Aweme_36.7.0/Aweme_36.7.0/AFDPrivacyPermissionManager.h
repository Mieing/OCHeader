@class NSString;

@interface AFDPrivacyPermissionManager : NSObject <AFDPrivacyPermissionManagerProtocol>

@property (nonatomic) BOOL disabledPublishDownload;
@property (nonatomic) BOOL disabledPublishDuet;
@property (nonatomic) BOOL disabledPublishSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)disabledPublishDownload;
+ (BOOL)disabledPublishDuet;
+ (BOOL)disabledPublishSync;
+ (BOOL)shouldForbidDownloadBeforePublishWithModel:(id)a0;
+ (BOOL)shouldForbidDownloadAfterPublishWithModel:(id)a0;
+ (BOOL)isLongVideoWithDuration:(double)a0;
+ (id)downloadForbidToast;
+ (BOOL)shouldForbidDuetBeforePublishWithModel:(id)a0;
+ (BOOL)shouldForbidDuetAfterPublishWithModel:(id)a0;
+ (id)duetForbidToast;
+ (void)updatePrivacyPermissionWithPublishModel:(id)a0;
+ (BOOL)shouldForbidShareAsStoryBeforePublishWithModel:(id)a0;
+ (BOOL)shouldForbidShareAsStoryAfterPublishWithModel:(id)a0;
+ (id)shareVideoAsStoryForbidToastWithSettingTitle:(id)a0;
+ (BOOL)isNonPublicWorkPublished:(id)a0;
+ (BOOL)duetPermissionGreaterThanOnlySelf:(long long)a0;
+ (BOOL)storySharePermissionGreaterThanOnlySelf:(long long)a0;
+ (BOOL)downloadPermissionGreaterThanOnlySelf:(long long)a0;
+ (id)userModel;
+ (id)sharedInstance;

- (void)setupData;

@end
