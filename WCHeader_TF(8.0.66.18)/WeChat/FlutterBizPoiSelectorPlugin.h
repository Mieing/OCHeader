@class NSString;

@interface FlutterBizPoiSelectorPlugin : NSObject <MMFlutterPlugin, BizPoiSelectorApi>

@property (copy, nonatomic) id /* block */ poiSelectFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
