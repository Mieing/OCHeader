@class NSString, IESECServiceProxy, IESECWinLiveTabAnchorBottomObject, IESECWinContext;
@protocol IESECWinDataService, IESECWinTabService, IESECWinCategoryService;

@interface IESECWinLiveTabAnchorBottomSectionController : IGListSectionController <IESECWinContextProtocol> {
    IESECWinContext *_context;
    IESECWinLiveTabAnchorBottomObject *_object;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCategoryService> *categoryService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackParams;
- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void)trackWithEventName:(id)a0 trackParams:(id)a1 once:(id)a2 btmID:(id)a3;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
