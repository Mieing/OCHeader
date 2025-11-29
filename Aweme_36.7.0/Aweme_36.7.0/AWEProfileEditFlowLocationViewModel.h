@class AWELocationServicePersistModel, AWEProfileEditFlowLocationSelectResult;

@interface AWEProfileEditFlowLocationViewModel : AWEProfileEditFlowStepViewModel

@property (nonatomic) BOOL hasFetchedLocation;
@property (copy, nonatomic) AWEProfileEditFlowLocationSelectResult *selectedLocation;
@property (retain, nonatomic) AWELocationServicePersistModel *currentLocation;
@property (nonatomic) BOOL selectCurrentLocation;

- (BOOL)hasLocationPermission;
- (void)p_requestLocationPermission;
- (id)trackFlowType;
- (Class)stepViewClass;
- (void)fetchCurrentLocation;
- (void)p_fetchCurrentLocation;
- (void).cxx_destruct;
- (id)impressionEvent;
- (void)finishWithCompletion:(id /* block */)a0;

@end
