@class NSString, AWERTVRootFeedObserverCenter;
@protocol RTVUserProfileManagerInterface, RTVVoipConfigureManagerInterface, RxInjector, RTVVoipResourceFetcherInterface, RTVVoipSettingManagerInterface;

@interface AWERTVNarrowAnchorContextProvider : NSObject <RTVNarrowAnchorContextProviderProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) AWERTVRootFeedObserverCenter *feedObserver;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> userProfileManager;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (retain, nonatomic) id<RTVVoipSettingManagerInterface> settingsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)shareCurrentFeedAweme:(id)a0;
- (id)__blockShareVideoTypes;
- (void)track_shareVideo:(id)a0 toConversation:(id)a1 awemeModel:(id)a2;
- (void)track_shareVideo:(id)a0 toUserID:(id)a1 awemeModel:(id)a2;
- (void)track_shareVideoToConversations:(id)a0 awemeModel:(id)a1;
- (id)iconOfAnchorType:(long long)a0;
- (id)titleOfAnchorType:(long long)a0;
- (void)handleEventOfAnchorType:(long long)a0 roomController:(id)a1;
- (void).cxx_destruct;

@end
