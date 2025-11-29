@class NSString;

@interface AWEIMIncentiveChatDataRequestService : NSObject <AWEUserMessage>

@property (nonatomic) BOOL coldLaunchRequesting;
@property (nonatomic) BOOL coldLaunchRequestFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)fetchColdLaunchDataIfNeededWithEnterType:(long long)a0;
- (id)init;
- (void)dealloc;

@end
