@class NSString;

@interface AWEPlayFeaturesContextTracker : HTSService <IESPlayFeaturesContextTracker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)fillTrackInfo:(id)a0 withModel:(id)a1;

@end
