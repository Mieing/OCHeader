@class NSString, UIView, MMDynamicColor, UILabel;

@interface KindaOpenIMInfoView : KindaView <MMKOpenIMInfoView>

@property (nonatomic) int m_textSize;
@property (nonatomic) long long m_textAlign;
@property (nonatomic) long long m_textViewAlign;
@property (retain, nonatomic) MMDynamicColor *m_textColor;
@property (retain, nonatomic) NSString *m_formatText;
@property (retain, nonatomic) NSString *m_nickName;
@property (retain, nonatomic) NSString *m_trueName;
@property (retain, nonatomic) NSString *m_businessName;
@property (retain, nonatomic) UIView *m_view;
@property (retain, nonatomic) UIView *m_firstLayout;
@property (retain, nonatomic) UILabel *m_firstLabel;
@property (retain, nonatomic) UILabel *m_firstSuffixLabel;
@property (retain, nonatomic) UIView *m_secondLayout;
@property (retain, nonatomic) UILabel *m_secondLabel;
@property (retain, nonatomic) UILabel *m_secondSuffixLabel;
@property (retain, nonatomic) UILabel *m_measureLabel;
@property (nonatomic) long long fontStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getView;
- (void)updateContent;
- (void)updateContent:(BOOL)a0;
- (void)innerUpdateContent;
- (void)setTextSize:(float)a0;
- (float)getTextSize;
- (void)setTextAlign:(long long)a0;
- (long long)getTextAlign;
- (int)getLayoutAlign;
- (double)getContentHeight;
- (void)setTextColor:(id)a0;
- (id)getTextColor;
- (void)setFormatText:(id)a0;
- (id)getFormatText;
- (void)setNickNameText:(id)a0;
- (id)getNickNameText;
- (void)setTrueNameText:(id)a0;
- (id)getTrueNameText;
- (void)setBusinessNameText:(id)a0;
- (id)getBusinessNameText;
- (double)measureWidth:(id)a0;
- (id)insertWordJoinerInContent:(id)a0;
- (id)fontWithStyle;
- (void).cxx_destruct;

@end
