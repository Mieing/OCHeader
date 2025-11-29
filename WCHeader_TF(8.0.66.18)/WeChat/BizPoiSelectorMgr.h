@class FlutterBrandNavigator, NSString;

@interface BizPoiSelectorMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) FlutterBrandNavigator *flutterNavigator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createFlutterInstanceWithPoiInfo:(struct LaunchBizPoiSelectorInfo { void /* function */ **x0; int x1; int x2[3]; void *x3; void *x4; struct BizPoiSelectorGpsInfo *x5; struct RepeatedPtrField<biz::BizPoiSelectorGpsInfo> { void **x0; int x1; int x2; int x3; } x6; })a0;
- (void).cxx_destruct;

@end
