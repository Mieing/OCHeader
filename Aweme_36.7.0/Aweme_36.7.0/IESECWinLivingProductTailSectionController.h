@class NSString, IESECServiceProxy, IESECWinLivingProductTailObject, IESECWinContext;
@protocol IESECWinDataService, IESECWinTabService, IESECWinLivingHotProductService;

@interface IESECWinLivingProductTailSectionController : IGListSectionController <IESECWinContextProtocol> {
    IESECWinLivingProductTailObject *_object;
    IESECWinContext *_context;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLivingHotProductService> *livingHotProductService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
