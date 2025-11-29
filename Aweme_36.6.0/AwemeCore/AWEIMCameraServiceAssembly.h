@class NSString;

@interface AWEIMCameraServiceAssembly : NSObject <ACCServiceAssemblyProtocol>

@property (nonatomic) unsigned long long assembleStage;
@property (nonatomic) BOOL hasAssembled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assembleWithContainer:(id)a0;
- (void)containerLoaded:(id)a0;

@end
