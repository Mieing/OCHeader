@class NSString;

@interface AWEGDBizAbilityProvider : NSObject <AWEGDBizAbilityProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMainRequestProvider:(id)a0;
- (id)getDownGradeH5Provider:(id)a0;
- (id)getDitoProvider:(id)a0;
- (id)getPreReqProvider:(id)a0;
- (id)getPreloadProvider:(id)a0;
- (id)getTrackerProvider:(id)a0;
- (id)getRecoveryProvider:(id)a0;

@end
