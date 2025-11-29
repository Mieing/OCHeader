@class NSString;

@interface AWEAppExitFeaturesContextTracker : HTSService <IESAppExitFeaturesContextTracker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)fillFeatures:(id)a0 withModel:(id)a1;

@end
