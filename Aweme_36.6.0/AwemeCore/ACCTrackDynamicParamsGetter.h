@class NSString;

@interface ACCTrackDynamicParamsGetter : ACCUseCase <ACCTrackDynamicParamsGetter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dynamicParamsForEvent:(id)a0 inputParams:(id)a1;
- (id)injectClasses;

@end
