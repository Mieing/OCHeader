@class NSDictionary, IESECLiveContext;

@interface IESECLiveListUpdater : NSObject

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) NSDictionary *entranceInfoParams;

- (id)getRequestWithProductInfos:(id)a0 listViewShowing:(BOOL)a1 extraRequestParams:(id)a2;
- (id)newestTabsWithMsgTabInfosV2:(id)a0;
- (id)tabsAfterIntimeRefreshWithOriginTabs:(id)a0 newestTabInfos:(id)a1;
- (void).cxx_destruct;

@end
