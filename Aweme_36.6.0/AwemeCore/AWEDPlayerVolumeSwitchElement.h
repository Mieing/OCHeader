@class NSNumber;

@interface AWEDPlayerVolumeSwitchElement : AWEDPlayerInteractionBaseElement

@property (retain, nonatomic) NSNumber *volumeHandlerID;

- (void)initializeElement;
- (id)activateInfoWithData:(id)a0;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (id)activateInfoForSimplePlayerWithVideoModel:(id)a0;
- (void)updateVolumeSwitch;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)dealloc;

@end
