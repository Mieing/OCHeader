@class NSDictionary, NSArray, NSNumber;
@protocol IESECMallPerfService, IESECMallMultiContextService, IESECMallTabFrameService;

@interface IESECMallChannelManager : NSObject

@property (copy, nonatomic) NSDictionary *originChannelData;
@property (copy, nonatomic) NSArray *finalTabList;
@property (copy, nonatomic) NSArray *channels;
@property (copy, nonatomic) NSDictionary *channelsMap;
@property (weak, nonatomic) id<IESECMallMultiContextService> contextService;
@property (weak, nonatomic) id<IESECMallPerfService> perfMonitorService;
@property (weak, nonatomic) id<IESECMallTabFrameService> tabFrameService;
@property (retain, nonatomic) NSNumber *tabClickTime;

+ (id)registeredChannelMap;
+ (BOOL)isValidTabList:(id)a0;

- (id)ecomSceneID;
- (long long)indexOfTabID:(id)a0;
- (id)multiTabConfig;
- (id)tabOriginDataWithTabID:(id)a0;
- (void)loadChannelWithTabInfo:(id)a0 originData:(id)a1 mallEnvID:(id)a2 referString:(id)a3;
- (id)tabIDList;
- (id)loadedChannelControllers;
- (id)tabInfoOfTabID:(id)a0;
- (id)tabInfoOfIndex:(long long)a0;
- (id)tabIDOfIndex:(long long)a0;
- (id)channelControllerOfTabID:(id)a0;
- (id)channelControllerOfIndex:(long long)a0;
- (id)channelViewControllerOfTabID:(id)a0;
- (BOOL)channelIsLoadedWithTabId:(id)a0;
- (id)channelViewControllerOfIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
