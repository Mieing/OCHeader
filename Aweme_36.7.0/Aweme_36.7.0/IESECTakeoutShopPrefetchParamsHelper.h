@class NSDictionary, NSString;

@interface IESECTakeoutShopPrefetchParamsHelper : NSObject <IESECBlenderPrefetchDelegate>

@property (retain, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) NSDictionary *urlParams;
@property (retain, nonatomic) NSString *btm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rebuildQueryParams;
- (BOOL)shouldRequest:(BOOL)a0 apiName:(id)a1;
- (id)parseParams:(id)a0 globalInfo:(id)a1 forScene:(long long)a2 customeContext:(id)a3;
- (id)initWithParams:(id)a0 withBtm:(id)a1;
- (void).cxx_destruct;

@end
