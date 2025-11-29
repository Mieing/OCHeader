@class NSString;

@interface AFDMomentCameraLogServiceImpl : NSObject <ACCMomentCameraLogService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ACCMCLogInfoWithFormat:(id)a0;
- (void)ACCMCLogErrorWithFormat:(id)a0;
- (void)ACCMCLogWarnWithFormat:(id)a0;

@end
