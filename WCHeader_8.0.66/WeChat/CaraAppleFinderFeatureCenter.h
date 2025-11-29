@class NSString;

@interface CaraAppleFinderFeatureCenter : NSObject <CaraNativeFinderFeatureCenterBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)fansCount;
- (int)postFeedCount;
- (BOOL)isRealName;
- (BOOL)wxPayAuthorization;
- (BOOL)hasFinderAccount;
- (int)authIconType;

@end
