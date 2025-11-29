@interface BDUGLocationStatusUtil : NSObject

+ (BOOL)locationEnableForStatus:(int)a0;
+ (BOOL)bdLocationEnableForStatus:(long long)a0;
+ (BOOL)bdLocationNotDeterminedForStatus:(long long)a0;
+ (long long)authorizationStatusForStatus:(int)a0;
+ (BOOL)bdugLocationAuthorizationEnabledForStatus:(long long)a0;
+ (BOOL)bdugLocationAuthorizationEnabledForFullAccracy:(long long)a0;
+ (long long)bdugLocationAccuracyConvert:(long long)a0;
+ (double)timeIntervalForDesiredAccuracy:(long long)a0;
+ (double)accuracyFromDesiredAccuracy:(long long)a0;
+ (long long)activityTypeFromBDActivityType:(long long)a0;

@end
