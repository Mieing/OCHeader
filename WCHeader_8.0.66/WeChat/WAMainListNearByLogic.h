@class WANearByInfo, NSString, WAMainListNearByLocationLogic;
@protocol WAMainListNearByLogicDelegate;

@interface WAMainListNearByLogic : MMObject <PBMessageObserverDelegate, WAMainListNearByLocationLogicDelegate>

@property (nonatomic) BOOL isFirstTimeFetch;
@property (nonatomic) BOOL isNearByDataLoaded;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) WAMainListNearByLocationLogic *locationLogic;
@property (copy, nonatomic) id /* block */ updateCompletion;
@property (retain, nonatomic) WANearByInfo *nearByInfo;
@property (nonatomic) BOOL clicked;
@property (weak, nonatomic) id<WAMainListNearByLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)isNearByUrlExpired;
- (BOOL)hasNearByStore;
- (BOOL)isNearByThresholdValid;
- (BOOL)isNearByDataValid;
- (void)updateNearWeApp;
- (void)updateNearWeAppWithCompletion:(id /* block */)a0;
- (unsigned long long)nearByAppNumber;
- (id)nearByPageUrl;
- (id)nearbyWeappInfo;
- (BOOL)jumpWeapp;
- (id)preViewItems;
- (void)callUpdateCompletion;
- (void)onGetLocationSuccess:(id)a0;
- (void)onGetLocationFailedWithReason:(unsigned int)a0;
- (void)reportWeAppLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)parseNearByInfoFromResponse:(id)a0;
- (void).cxx_destruct;

@end
