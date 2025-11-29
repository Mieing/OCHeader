@class NSString;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerWechatShareComponent : AWEIMComponentBase <IESIMContactPickerContentDataProvider, IESIMContactPickerContentSubComponent>

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)__log:(id)a0;

- (id)getCellViewModels;
- (void)componentDidMounted:(id)a0;
- (id)cellTitle;
- (id)getDataProvider;
- (BOOL)__shouldDowngradeWechatInvite;
- (BOOL)shouldDowngrade;
- (void)didClickWechatShare;
- (id)__newCellModel;
- (id)cellAvatarImageName;
- (id)cellAvatarBackgrondColor;
- (void)updateCellModelIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
