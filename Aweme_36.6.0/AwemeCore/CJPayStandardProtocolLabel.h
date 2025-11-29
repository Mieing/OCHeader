@class UIFont, NSString, UIColor, NSDictionary, UILabel, NSMutableAttributedString;
@protocol CJPayStandardProtocolDelegate;

@interface CJPayStandardProtocolLabel : UIView <UITextViewDelegate>

@property (retain, nonatomic) UILabel *protocolLabel;
@property (nonatomic) BOOL isOpen;
@property (copy, nonatomic) NSString *unfoldBtnText;
@property (copy, nonatomic) NSString *allProtocolName;
@property (retain, nonatomic) NSMutableAttributedString *unfoldString;
@property (retain, nonatomic) NSMutableAttributedString *foldString;
@property (retain, nonatomic) UIFont *normalDefaultTextFont;
@property (retain, nonatomic) UIColor *normalDefaultTextColor;
@property (retain, nonatomic) UIColor *unfoldDefaultTextColor;
@property (retain, nonatomic) UIFont *protocolDefaultTextFont;
@property (retain, nonatomic) UIColor *protocolDefaultTextColor;
@property (weak, nonatomic) id<CJPayStandardProtocolDelegate> delegate;
@property (nonatomic) long long defaultLineNumber;
@property (nonatomic) double lineSpacing;
@property (retain, nonatomic) UIFont *normalTextFont;
@property (retain, nonatomic) UIColor *normalTextColor;
@property (retain, nonatomic) UIFont *protocolTextFont;
@property (retain, nonatomic) UIColor *protocolTextColor;
@property (copy, nonatomic) NSString *protocolPrefixText;
@property (copy, nonatomic) NSString *protocolSuffixText;
@property (copy, nonatomic) NSDictionary *protocolList;
@property (copy, nonatomic) id /* block */ unfoldClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configProtocolText;
- (void)p_makeUI;
- (id)p_getFoldString:(id)a0;
- (void)p_configShowContentText:(id)a0;
- (void)p_configAttributedString:(id)a0;
- (id)p_getLinesArrayOfAttributedString:(id)a0 width:(double)a1;
- (void)p_configNormalTextStyle:(id)a0 normalTextString:(id)a1;
- (void)p_configProtocolTextStyle:(id)a0 protocolTextString:(id)a1;
- (void)p_configUnfoldTextStyle:(id)a0 unfoldTextString:(id)a1;
- (void)p_unfoldAction:(id)a0;
- (void)p_clickTapGestureHandler:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
