@class IESECMallPageCard, NSString, IESECMallViewModel, IESECListKitDynamicRequest, IESECListKitBFFViewController;
@protocol IESECMallContextProtocol;

@interface IESECMallTabDataPrefetchManager : NSObject <IESECListKitDynamicRequestDelegate, IESECMallComponentProtocol, IESECMallTabDataPrefetchProtocol>

@property (weak, nonatomic) id<IESECMallContextProtocol> mallContext;
@property (weak, nonatomic) IESECListKitBFFViewController *listVC;
@property (weak, nonatomic) IESECMallViewModel *mallViewModel;
@property (weak, nonatomic) IESECMallPageCard *pageCard;
@property (copy, nonatomic) NSString *configUrl;
@property (retain, nonatomic) IESECListKitDynamicRequest *dynamicRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelPrefetch;
- (void)prefetchNextTabData;
- (void)cancelPrefetchNextTab;
- (BOOL)shouldRequestSelectedSection:(id)a0;
- (id)initWithMallViewModel:(id)a0 bffVC:(id)a1 pageCard:(id)a2 bundleConfigUrl:(id)a3;
- (void)initDynamicRequest;
- (void)executePrefetchNextTab;
- (id)getNextTabInfo;
- (void)requestNextTabDataWithTabId:(long long)a0 tabName:(id)a1 logExtra:(id)a2 bundleConfig:(id)a3;
- (id)getTabInfo:(unsigned long long)a0;
- (BOOL)canPrefetchForTab:(id)a0;
- (id)dynamicRequestHeaderExtraDictionary:(id)a0;
- (id)getPreTabInfo;
- (void).cxx_destruct;

@end
