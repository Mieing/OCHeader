@class NSString;

@interface AWEUserPageFeaturesContextTracker : HTSService <IESUserPageFeaturesContextTracker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)fillFeatures:(id)a0 withModel:(id)a1 config:(id)a2;
- (BOOL)fillTrackInfo:(id)a0 withGroupID:(id)a1;

@end
