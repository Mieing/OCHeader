@class NSString;

@interface AWEPublishCreateModelParamLocationProvider : NSObject <AWEPublishCreateModelParamProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishRequestParams:(id)a0 context:(id)a1;
- (id)p_extraGPSInfo:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)p_locationToDMS:(double)a0;

@end
