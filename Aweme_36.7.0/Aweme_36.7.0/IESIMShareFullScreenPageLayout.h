@interface IESIMShareFullScreenPageLayout : IESIMContactPickerLayout

@property (nonatomic) BOOL isKeyboardShow;

- (double)panelHeight;
- (id)containerDarkColor;
- (BOOL)isContentSectionBottomEqualToBottomTop;
- (id)containerLightColor;
- (BOOL)needFollowKeyboard;
- (id)backgroundColor;
- (id)contentBackgroundColor;

@end
