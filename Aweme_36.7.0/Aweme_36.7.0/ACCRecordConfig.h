@class ACCRecordMusicConfigAssembler, NSString, APCDTOCameraComposer, NSError;

@interface ACCRecordConfig : NSObject <ACCParamteriedTaskService>

@property (retain, nonatomic) APCDTOCameraComposer *cameraComposer;
@property (retain, nonatomic) ACCRecordMusicConfigAssembler *musicConfigAssembler;
@property (retain, nonatomic) NSError *lastError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_updateLastError:(id)a0;
- (void)paramteriedRunAsyncTaskWithGroup:(id)a0;
- (id)initWithCameraComposer:(id)a0;
- (void)p_propertyAssemblerIfNeed;
- (void).cxx_destruct;

@end
