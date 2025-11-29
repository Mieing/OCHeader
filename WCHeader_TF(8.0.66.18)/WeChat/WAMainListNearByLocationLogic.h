@class MMTimer, NSString, WALocationGetter;
@protocol WAMainListNearByLocationLogicDelegate;

@interface WAMainListNearByLocationLogic : MMObject <WALocationGetterDelegate>

@property (retain, nonatomic) WALocationGetter *locationGetter;
@property (retain, nonatomic) MMTimer *timer;
@property (weak, nonatomic) id<WAMainListNearByLocationLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startGetLocation;
- (void)onGetLocationSuccess:(id)a0;
- (void)onGetLocationFailedWithReason:(unsigned long long)a0;
- (void)firstAccuracyInvalid:(id)a0;
- (void)secondAccuracyInvalid:(id)a0;
- (void)thirdAccuracyInvalid:(id)a0;
- (void).cxx_destruct;

@end
