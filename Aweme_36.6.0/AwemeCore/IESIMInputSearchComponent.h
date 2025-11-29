@class AWEIMInputVCBadgeButton, NSString;

@interface IESIMInputSearchComponent : AWEIMComponentBase <IESIMInputSearchComponentInterface, AWEIMComponentLazyCreate, IESIMInputThemeChangedAction>

@property (retain, nonatomic) AWEIMInputVCBadgeButton *searchGifBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)searchGifBtnClicked:(id)a0;
- (void)inputThemeChangedWithThemeStyle:(long long)a0;
- (void)refreshBackgroundWithBackGroundImage:(BOOL)a0;
- (void).cxx_destruct;
- (id)searchButton;

@end
