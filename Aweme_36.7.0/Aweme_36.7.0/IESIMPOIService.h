@class NSString;

@interface IESIMPOIService : HTSService <IESIMPOIService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)poiResourceUtils;
- (id)trackerParamsForEnterPOIDetailWithPOIID:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 extraParams:(id)a3;
- (long long)getLocationAccessStatus;
- (BOOL)isInTheSameCityWithCurrentLocation:(id)a0 targetCityCode:(id)a1;
- (id)getCurrentLocationWithBDCert:(id)a0;
- (BOOL)hasPermission;

@end
