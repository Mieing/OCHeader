@class NSString, NSDictionary, NSMutableDictionary, IESLiveInteractDynamicContainerViewHolder, HTSLiveRoom;
@protocol IESLiveInteractDynamicContainerProvider;

@interface IESLiveDynamicContainerLoader : NSObject <IESLiveDynamicContainerLoaderService>

@property (retain, nonatomic) IESLiveInteractDynamicContainerViewHolder *logicContainer;
@property (retain, nonatomic) IESLiveInteractDynamicContainerViewHolder *renderContainer;
@property (weak, nonatomic) id<IESLiveInteractDynamicContainerProvider> dynamicContainerProvider;
@property (nonatomic) BOOL isFeed;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isFullScreenPreStreamView;
@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (copy, nonatomic) NSDictionary *renderInitialData;
@property (readonly, nonatomic) NSMutableDictionary *cacheData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)resetContainer;
- (void)loadContainers:(long long)a0;
- (void)removeContainers:(long long)a0;
- (unsigned long long)currentDynamicContainerOfflineVersion;
- (void)loadLogicContainer;
- (void)loadRenderContainer;
- (void)removeLogicContainer;
- (void)removeRenderContainer;
- (long long)convertEnterFromToFeedType:(id)a0;
- (id)getSettingPreloadList;
- (id)dynamicSeatSupportList;
- (void).cxx_destruct;
- (void)startContainer;

@end
