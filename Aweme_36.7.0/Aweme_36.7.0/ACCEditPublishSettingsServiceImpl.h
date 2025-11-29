@class NSPointerArray, NSString;

@interface ACCEditPublishSettingsServiceImpl : NSObject <ACCEditPublishSettingsServiceProtocol>

@property (retain, nonatomic) NSPointerArray *subscribers;
@property (nonatomic) BOOL storyTTLContentUpdated;
@property (nonatomic) BOOL publishButtonClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubscribers:(id)a0;
- (void)notifyPublishButtonClicked;
- (void)sendUpdateContentToSubscribers;
- (void)sendPrivacySettingsDismissToSubscribers;
- (void).cxx_destruct;

@end
