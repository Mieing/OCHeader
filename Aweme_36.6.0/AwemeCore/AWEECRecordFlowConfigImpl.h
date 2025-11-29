@class NSString;

@interface AWEECRecordFlowConfigImpl : NSObject <ACCRecordFlowConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableLightningStyleRecordButton;
- (BOOL)enableTapToTakePictureRecordMode:(BOOL)a0;
- (BOOL)needJumpDirectlyAfterTakePicture;

@end
