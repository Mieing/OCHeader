@class NSString;

@interface AWEAntiAddictDailyAlertAction : AWEAntiAddictBaseAction <AWEAntiAddictDailyAlertDelegate>

@property (nonatomic) unsigned long long viewType;
@property (nonatomic) BOOL isDay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleName;

- (id)updatedDataOnBegin;
- (void)dailyAlert:(id)a0 didShowWithSuccess:(BOOL)a1;
- (void)dailyAlertDidDismiss:(id)a0;
- (BOOL)shouldUseNewStyle;
- (void)begin;
- (void)end;

@end
