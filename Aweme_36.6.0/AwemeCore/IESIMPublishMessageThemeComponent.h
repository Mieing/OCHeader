@class NSString;

@interface IESIMPublishMessageThemeComponent : AWEIMComponentBase <AWEIMMessageListBackgroundInterface>

@property (nonatomic) BOOL originHasBackgroundImg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (BOOL)isDisplayingBackgroundImage;
- (id)backgroundImgView;
- (void)processChangeBgImgTemplate:(id)a0;
- (void)didTapShareBackgroundCell:(id)a0;
- (void)updateTheme;

@end
