@class NSString;

@interface SonicDarwinCameraService : NSObject <SonicCameraService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getSonicCameraWithPageID:(int)a0 callback:(id)a1;

@end
