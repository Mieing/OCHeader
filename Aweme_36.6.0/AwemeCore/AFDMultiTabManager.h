@class NSArray, NSMutableDictionary, NSString;
@protocol AFDMultiTabDelegate;

@interface AFDMultiTabManager : NSObject <AWEUserMessage, AFDMultiTabManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *viewModelDic;
@property (retain, nonatomic) NSMutableDictionary *channelIDToVMClassMap;
@property (copy, nonatomic) NSArray *currentTabsIDList;
@property (copy, nonatomic) NSArray *currentChannelViewModels;
@property (copy, nonatomic) NSString *initialTabID;
@property (copy, nonatomic) NSString *forceLandTabID;
@property (weak, nonatomic) id<AFDMultiTabDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)destroyManager;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)channelViewModelForTab:(id)a0;
- (id)channelViewModelForIndex:(long long)a0;
- (long long)initialTabIndex;
- (BOOL)updateCurrentTabsList;
- (id)enterFriendsTabSwitchToTabID;
- (void)switchToTab:(id)a0 withParams:(id)a1;
- (void)registerViewModels;
- (void)p_generateCurrentChannelViewModels;
- (void)p_registerViewModelWithID:(id)a0 Class:(Class)a1;
- (id)configCurrentTabs;
- (id)p_channelViewModelForTab:(id)a0;
- (BOOL)canSwitchToTab:(id)a0;
- (BOOL)isShowingTab:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)indexForTab:(id)a0;
- (void)dealloc;

@end
