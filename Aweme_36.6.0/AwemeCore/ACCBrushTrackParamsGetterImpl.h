@class NSString;

@interface ACCBrushTrackParamsGetterImpl : ACCUseCase <ACCBrushTrackParamsGetter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPainted;

@end
