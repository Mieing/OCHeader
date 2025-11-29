@class NSString;

@interface AWEBDABTestManager : NSObject <AWEUserMessage, BDCommonABTestUserDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)settingsRequestParamsDictionary;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)a0;
+ (void)doOriginalActions;
+ (void)fetchABDataWithContext:(id)a0;
+ (void)doOriginalActionsWithContext:(id)a0;
+ (void)subscribeAWEUserMessage;
+ (void)fetchABData;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)getCurrentUserKey;
- (id)init;
- (void)dealloc;

@end
