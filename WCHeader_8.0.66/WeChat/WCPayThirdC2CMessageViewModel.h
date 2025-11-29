@class UIColor, WCPayNetImageResource, NSString, UIImage, UIFont, BubbleInfo;

@interface WCPayThirdC2CMessageViewModel : WCPayBaseMessageViewModel

@property (retain, nonatomic) UIImage *m_miniIconImage;
@property (retain, nonatomic) WCPayNetImageResource *m_backgroundResource;
@property (retain, nonatomic) WCPayNetImageResource *m_iconResource;
@property (retain, nonatomic) WCPayNetImageResource *m_miniIconResource;
@property (retain, nonatomic) BubbleInfo *thirdC2CBubbleInfo;
@property (readonly, nonatomic) UIColor *titleColor;
@property (readonly, nonatomic) UIColor *descColor;
@property (readonly, nonatomic) NSString *backgroundName;
@property (readonly, nonatomic) NSString *backgroundUrl;
@property (readonly, nonatomic) NSString *miniIconUrl;
@property (readonly, nonatomic) NSString *backgroundUrlInDarkmode;
@property (readonly, nonatomic) UIColor *seperatorColor;
@property (readonly, nonatomic) UIColor *sceneTextColor;
@property (readonly, nonatomic) UIFont *titleFont;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)cellViewClassName;
- (unsigned long long)bubbleType;
- (id)bgBubbleInfo;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (void)setMiniIconImage:(id)a0;
- (id)sourceIcon;
- (id)titleText;
- (id)descText;
- (double)iconSize;
- (id)iconName;
- (id)iconUrl;
- (id)parseColorFromString:(id)a0;
- (id)additionalAccessibilityDescription;
- (void).cxx_destruct;

@end
