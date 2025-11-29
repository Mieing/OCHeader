@class NSString;

@interface AWEPOIClientSmartService : NSObject <AWEPOIClientSmartServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)getFeatureListFromStatic:(id)a0;
- (id)getFeatureFromLocalLife:(id)a0;
- (id)getFeatureFromSolaria:(id)a0;

@end
