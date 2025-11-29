@class NSString;

@interface AWESecurityFrameSeviceImpl : HTSService <AWESecurityFrameSeviceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)saveImage:(id)a0 type:(unsigned long long)a1 taskId:(id)a2 completion:(id /* block */)a3;
+ (double)uploadFramesInterval;
+ (struct CGSize { double x0; double x1; })framesResolution;


@end
