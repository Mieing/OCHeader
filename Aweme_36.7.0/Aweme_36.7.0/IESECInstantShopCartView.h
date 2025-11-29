@class NSDictionary, NSString, IESECServiceProxy;
@protocol IESECBlenderPrefetch;

@interface IESECInstantShopCartView : IESECBlenderLynxView <IESECInstantShopCartView>

@property (nonatomic) BOOL hasPrefetch;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSString *dataOrigin;
@property (retain, nonatomic) NSString *templateUrl;
@property (retain, nonatomic) IESECServiceProxy<IESECBlenderPrefetch> *prefetcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)globalInfoChanged:(id)a0;
- (BOOL)shouldAttachLynxView:(id)a0;
- (BOOL)enableReportPerf;
- (id)buildAddress:(id)a0;
- (void)handlePrefetch:(id)a0;
- (void).cxx_destruct;

@end
