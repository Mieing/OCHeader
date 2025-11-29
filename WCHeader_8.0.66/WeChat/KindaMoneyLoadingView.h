@class MMDynamicColor, NSString, TimeoutNumber;

@interface KindaMoneyLoadingView : KindaView <MMKMoneyLoadingView>

@property (retain, nonatomic) TimeoutNumber *timeoutNumber;
@property (retain, nonatomic) MMDynamicColor *textColor;
@property (retain, nonatomic) NSString *fontName;
@property (nonatomic) float textSize;
@property (nonatomic) long long textAlign;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTextAlignment:(long long)a0;
- (id)init;
- (id)getView;
- (void)setCurrencySymbol:(id)a0;
- (id)getCurrencySymbol;
- (void)setFont:(id)a0;
- (void)setMoney:(long long)a0 animated:(BOOL)a1;
- (float)getTextSize;
- (id)getTextColor;
- (void)setAnimationDuration:(float)a0;
- (float)getAnimationDuration;
- (void)startLoading;
- (void)stopLoading;
- (void)applyFont;
- (void)setTextSizeNotScaleable:(float)a0 isScaleable:(BOOL)a1;
- (void)setGravity:(long long)a0;
- (void).cxx_destruct;

@end
