@class UIColor, NSString, AWEIMConversationContext, AWEIMCodeGenFeaturePanelSingleItemModel, NSAttributedString;

@interface AWEIMPlayEntryBaseItemViewModel : NSObject

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSAttributedString *title;
@property (retain, nonatomic) NSAttributedString *subtitle;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) BOOL needRedDot;
@property (nonatomic) BOOL needProgress;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) AWEIMCodeGenFeaturePanelSingleItemModel *item;
@property (nonatomic) double lastClickTime;
@property (weak, nonatomic) AWEIMConversationContext *convContext;
@property (nonatomic) unsigned long long index;

- (void)p_calculateProperties;
- (BOOL)p_checkDebounce;
- (void)p_trackWithEvent:(id)a0;
- (id)p_redDotDidShowKey;
- (void)p_composeStaticProperties;
- (id)p_calculateAttributeTextWithText:(id)a0 darkColor:(id)a1 lightColor:(id)a2 templateArray:(id)a3 type:(unsigned long long)a4;
- (id)p_colorWithHexStr:(id)a0;
- (id)initWithItem:(id)a0 convContext:(id)a1;
- (void)reloadTheme;
- (void)didShowItem;
- (void)trackItemShow;
- (void).cxx_destruct;
- (void)didSelectItem;

@end
