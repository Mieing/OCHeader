@class NSString;

@interface IESLocalLifeLocationHostService : HTSService <IESLocalLifeLocationHostService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentCityCode;
+ (id)cityInfo;
+ (id)getCurrentLocationWithBDCert:(id)a0 encodeType:(unsigned long long)a1;
+ (id)transformLocationWithCLLocation:(id)a0 encodeType:(unsigned long long)a1;
+ (void)requestCurrentLocationWithBDCert:(id)a0 completion:(id /* block */)a1;
+ (void)requestPermissionWithBDCert:(id)a0 completion:(id /* block */)a1;
+ (unsigned long long)getLocationAccessStatus;
+ (long long)getCurrentLocationAuthorizationAccuracyStatus;
+ (BOOL)isSystemLocationAlertShowned;
+ (unsigned long long)convertPermissionType:(unsigned long long)a0;
+ (BOOL)hasPermission;


@end
