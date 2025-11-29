@class NSString;
@protocol AWEIMSkylightCellPendantInterface;

@interface AWEIMSkyUserPendantComponent : AWEIMSkylightBaseComponent <AWEIMSkylightCellComponentEvent>

@property (weak, nonatomic) id<AWEIMSkylightCellPendantInterface> pendantInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateComponentAfterModelUpdate;
- (void)lightDarkThemeDidChange;
- (void)imUserDidChange;
- (BOOL)p_isOnlineWithModel:(id)a0;
- (void)p_updatePresenter:(BOOL)a0;
- (void)monitorOnlineStatus;
- (void)p_updateOnline;
- (void).cxx_destruct;

@end
