@class NSString;

@interface IESIMContactPickerCellAvatarComponent_customExtension : IESIMContactPickerCellComponentBase <IESIMContactPickerCellAvatarComponentExtensionProtocol>

@property (copy, nonatomic) id /* block */ createBlock;
@property (copy, nonatomic) NSString *maskImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willDisplayAtIndexPath:(id)a0;
- (void)updateView:(id)a0 cacheService:(id)a1;
- (id)avatarMaskImageName;
- (id)initWitCustomViewFactory:(id /* block */)a0 maskImageName:(id)a1;
- (void).cxx_destruct;
- (id)createView;

@end
