@class UIView, NSString, IESLiveLyricViewConfig, HTSEventForwardingView, NSDictionary, NSMapTable, UILabel;

@interface IESLiveKRCLyricView : HTSEventForwardingView <NSLayoutManagerDelegate>

@property (retain, nonatomic) IESLiveLyricViewConfig *config;
@property (retain, nonatomic) HTSEventForwardingView *contentView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *maskLabelView;
@property (retain, nonatomic) UILabel *maskLabel;
@property (nonatomic) BOOL isFocused;
@property (copy, nonatomic) NSDictionary *focusNonMaskAttr;
@property (copy, nonatomic) NSDictionary *focusMaskAttr;
@property (copy, nonatomic) NSDictionary *nonFocusMaskAttr;
@property (copy, nonatomic) NSDictionary *nonFocusNonMaskAttr;
@property (retain, nonatomic) NSMapTable *boundingRectCache;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) IESLiveKRCLyricView *nextLyricView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConfig:(id)a0;
- (void)reloadWithText:(id)a0;
- (void)pr_makeFontAttribute;
- (void)p_scaleLabelWithAnimation:(BOOL)a0;
- (void)setCurrentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 progress:(double)a1;
- (void)_resetMaskLayerWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 progress:(double)a1;
- (id)textAttributesWithFocused:(BOOL)a0 isMaskLabel:(BOOL)a1;
- (id)initWithLyricViewConfig:(id)a0;
- (void)resetLyricView;
- (void)initSubviews;
- (void).cxx_destruct;
- (void)setFocused:(BOOL)a0;
- (void)layoutSubviews;

@end
