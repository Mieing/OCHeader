@class NSString;

@interface AWEAdFeedSlardarManager : HTSService <AWEGokuPluginTargetProtocol, AWEAdFeedSlardarManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)willDisplayCellWithContext:(id)a0;
- (void)didEndDisplayingCellWithContext:(id)a0;
- (void)reportInfoWithAdCid:(id)a0 topviewCid:(id)a1 logExtra:(id)a2;
- (void)reportInfoIsAdShowing:(BOOL)a0;
- (void)reportInfoWithAdCid:(id)a0 AndLogExtra:(id)a1;
- (unsigned long long)moduleNames;

@end
