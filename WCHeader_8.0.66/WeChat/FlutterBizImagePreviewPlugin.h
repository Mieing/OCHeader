@class NSString;

@interface FlutterBizImagePreviewPlugin : NSObject <MMFlutterPlugin, BizImagePreviewApi>

@property (copy, nonatomic) id /* block */ imagePreviewFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
