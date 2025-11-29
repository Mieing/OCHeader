@class NSString, AWEBinding;

@interface IESIMContactPickerCellOnlineComponent : IESIMContactPickerCellComponentBase <IESIMContactPickerCellAvatarComponentExtensionProtocol>

@property (retain, nonatomic) AWEBinding *binding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)componentDidMounted:(id)a0;
- (void)willDisplayAtIndexPath:(id)a0;
- (double)componentViewHeight;
- (void)updateView:(id)a0 cacheService:(id)a1;
- (void)didEndDisplay;
- (id)avatarMaskImageName;
- (void)p_updateOnlineState;
- (BOOL)p_isOnline;
- (void).cxx_destruct;
- (id)createView;

@end
