@class NSString;

@interface IESIMAdService : HTSService <IESIMAdService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackWithAdContext:(id)a0;
- (id)createAdTrackContext;

@end
