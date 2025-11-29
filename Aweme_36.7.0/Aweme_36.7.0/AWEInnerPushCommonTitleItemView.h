@class UILabel, UIView;

@interface AWEInnerPushCommonTitleItemView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *imStreakView;

- (BOOL)hitStreakUpdateExp;
- (void)updateCompressionResistanceWithType:(unsigned long long)a0;
- (void)updateAttributedTextWithModel:(id)a0 type:(unsigned long long)a1;
- (void)updateRegularTextWithModel:(id)a0 font:(id)a1 color:(id)a2;
- (void)updateIconAttrStringWithModel:(id)a0;
- (id)rebuildAttributeStringForBigFont:(id)a0 font:(id)a1;
- (id)iconAttrStringWithImage:(id)a0 model:(id)a1;
- (void)updateWithModel:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
