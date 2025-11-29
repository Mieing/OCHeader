@class NSString, NSDictionary;

@interface AWENotificationPermissionDataManager : NSObject

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSDictionary *pushClickTrackInfo;
@property (nonatomic) BOOL closedNoticeBar;
@property (nonatomic) BOOL canShowFromPsort;
@property (nonatomic) BOOL hasRequestedPsort;
@property (nonatomic) BOOL isRequestingPsort;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *actvityId;

+ (id)sharedManager;

- (id)__trackPushClickInfoWithPayload:(id)a0;
- (void)requestShowBottomBar:(id /* block */)a0 referString:(id)a1;
- (void)closeNotificationPermissionBar;
- (void).cxx_destruct;

@end
