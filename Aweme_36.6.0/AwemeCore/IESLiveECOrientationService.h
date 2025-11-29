@class NSString;

@interface IESLiveECOrientationService : NSObject <IESLiveECOrientationService>

@property (nonatomic) unsigned long long orientationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceOf:(id)a0;

- (void)forceUpdateToOrientation:(long long)a0;
- (BOOL)isCurrentLandscape;

@end
