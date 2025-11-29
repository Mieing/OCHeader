@interface AWEStudioRecordImpl.RecoderInspirationFollowPublicAPI : NSObject <AWEStudioInspirationFollowFeaturePublicAPI> {
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, readonly) BOOL hasGuideShowInLifeCycle;
@property (nonatomic, readonly) BOOL shouldClearCameraScreen;
@property (nonatomic, readonly) BOOL isInspirationPanelShow;
@property (nonatomic, readonly) BOOL canOpenGridView;
@property (nonatomic, readonly) BOOL isInspirationAutoShoot;

- (void)updateInspirationPanelState:(BOOL)a0 animated:(BOOL)a1 info:(id)a2;
- (void)markHDPhotoGuideHandled;
- (void).cxx_destruct;
- (id)init;

@end
