@class NSString;

@interface AWESensorFeaturesContextTracker : HTSService <IESSensorFeaturesContextTracker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)fillFeatures:(id)a0 withModel:(id)a1 config:(id)a2;
- (id)getFeature:(id)a0 params:(id)a1;

@end
