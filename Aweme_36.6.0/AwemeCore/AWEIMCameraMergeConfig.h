@class NSString;

@interface AWEIMCameraMergeConfig : NSObject <APCDTOMergeVEConfigUpdater>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateVEConfig:(id)a0 withDataContext:(id)a1;

@end
