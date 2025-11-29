@class NSString;

@interface ACCTrimCropTrackParamsGetterImpl : ACCUseCase <ACCTrimCropTrackParamsGetter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trimCropCommonTrackParams;

@end
