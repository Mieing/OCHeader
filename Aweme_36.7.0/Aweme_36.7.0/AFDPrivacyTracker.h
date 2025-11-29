@class NSString;

@interface AFDPrivacyTracker : NSObject <AWEIMSettingModelUpdateMessage, AFDPrivacyTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didUpdateIMSetting:(BOOL)a0 source:(id)a1 currentModel:(id)a2;
- (void)trackFollowRequest:(id)a0;
- (id)init;
- (void)dealloc;
- (void)addObservers;

@end
