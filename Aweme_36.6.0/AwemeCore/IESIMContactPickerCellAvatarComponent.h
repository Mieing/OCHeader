@class IESIMContactPickerCellComponentBase, AWEBinding;
@protocol IESIMContactPickerCellAvatarComponentExtensionProtocol;

@interface IESIMContactPickerCellAvatarComponent : IESIMContactPickerCellComponentBase

@property (retain, nonatomic) IESIMContactPickerCellComponentBase<IESIMContactPickerCellAvatarComponentExtensionProtocol> *extensionComponent;
@property (retain, nonatomic) AWEBinding *binding;
@property (retain, nonatomic) AWEBinding *avatarUrlBind;
@property (nonatomic) double avatarSize;

+ (id)identifier;

- (void)componentDidMounted:(id)a0;
- (void)willDisplayAtIndexPath:(id)a0;
- (double)componentViewHeight;
- (double)leftOffset;
- (void)updateView:(id)a0 cacheService:(id)a1;
- (void)didEndDisplay;
- (void)setExtensionCustomComponent:(id)a0;
- (void)setAvatarImageWithMaskImageName:(id)a0;
- (id)p_maskWithHeadImage:(id)a0 maskImageName:(id)a1;
- (void)p_flipContextVertically:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)createView;

@end
