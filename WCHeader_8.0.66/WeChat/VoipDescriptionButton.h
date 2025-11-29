@class UILabel, NSString, MMUIActivityIndicatorView;

@interface VoipDescriptionButton : MMUIButton

@property (retain, nonatomic) UILabel *m_bottomDescriptionLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (nonatomic) double labelYOffset;
@property (retain, nonatomic) MMUIActivityIndicatorView *indicatorView;
@property (retain, nonatomic) NSString *prevStr;
@property (nonatomic) double titleAlpha;
@property (nonatomic) BOOL isInScreenSharingAudienceMode;
@property (nonatomic) BOOL isStatusLoading;
@property (nonatomic) BOOL isUsingMPUI;
@property (retain, nonatomic) NSString *statusText;

+ (id)bottomDescriptionLabel;

- (void)setupTitle:(id)a0 subTitle:(id)a1;
- (id)getCurString;
- (double)actualHeight;
- (void)layoutSubviews;
- (void)setBottomTextColor:(id)a0;
- (void)setBottomDescription:(id)a0 withOffetY:(double)a1 fittingWidth:(double)a2;
- (void)setBottomDescription:(id)a0 withOffetY:(double)a1 fittingWidth:(double)a2 originFontSize:(double)a3 labelMaxWidth:(double)a4 ignoreSpaceChar:(BOOL)a5 numberOfLines:(unsigned long long)a6;
- (void)setNewConfigBottomDescription:(id)a0;
- (void)setBottomDescription:(id)a0 withOffetY:(double)a1;
- (void)setupIndicator;
- (void)showIndicatorLoading:(BOOL)a0;
- (double)totalHeight;
- (void)setEnabled:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
