@class NSString;

@interface AFDShareChannelService : HTSService <AFDShareChannelService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShowDouPlus:(id)a0;
- (BOOL)canShowForward:(id)a0;
- (BOOL)canShowDuet:(id)a0;
- (BOOL)canShowDataAnalytics:(id)a0;
- (BOOL)canShowPlayRemote:(id)a0;
- (BOOL)canShowPinToTop:(id)a0;
- (BOOL)forwardChannelUseNoColorIcon;

@end
