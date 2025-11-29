@class IESECGoodsPOIModel, IESECSKUDetailContext, IESECSKUModel, NSString;

@interface IESECSKUPOIViewModel : NSObject <IESECSKUViewModelProtocol>

@property (retain, nonatomic) IESECSKUModel *skuModel;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (retain, nonatomic) IESECGoodsPOIModel *poiInfo;
@property (readonly, nonatomic) NSString *poiListURLString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hintText;
- (BOOL)enableSwitch;
- (BOOL)showHint;
- (id)initWithSKUModel:(id)a0 detailContext:(id)a1;
- (void)trackPOIInfoShow;
- (void).cxx_destruct;

@end
