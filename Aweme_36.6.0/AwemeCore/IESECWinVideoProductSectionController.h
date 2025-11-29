@class NSString, IESECServiceProxy, IESECWinVideoProductObject, IESECWinContext;
@protocol IESECWinTabService, IESECWinDataService, IESECWinLiveService, IESECWinTabViewControllerManager, IESECWinTabLayoutService, IESECWinVideoProductDataService;

@interface IESECWinVideoProductSectionController : IGListSectionController <IESECWinVideoProductCellDelegate, IESECWinContextProtocol> {
    IESECWinContext *_context;
    IESECWinVideoProductObject *_object;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinTabLayoutService> *tabLayoutService;
@property (retain, nonatomic) id<IESECWinVideoProductDataService> videoProductDataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLiveService> *liveServiceProxy;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabViewControllerManager> *contentVCManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (id)paramsForEventTracking;
- (void)clickProductArea;
- (void)trackEventName:(id)a0 once:(id)a1;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
