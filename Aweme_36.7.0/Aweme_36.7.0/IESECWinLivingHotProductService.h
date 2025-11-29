@class IESECServiceProxy, NSString, IESECWinContext;
@protocol IESECWinDataService;

@interface IESECWinLivingHotProductService : NSObject <IESECWinLivingHotProductService> {
    IESECWinContext *_context;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (nonatomic) long long productCount;
@property (nonatomic) long long spreadTimeCount;
@property (nonatomic) long long surplusProductsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)spreadProductList;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
