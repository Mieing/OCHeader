@class UIColor, NSString, NSDictionary, BDPTextView, UILabel, BDPPrivacyUnionAuthView, BDPUniqueID;
@protocol BDPPrivacyRegulationContentViewDelegate;

@interface BDPAboutPrivacyRegulationContentView : UIView <UITextViewDelegate>

@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *protocolColor;
@property (nonatomic) BOOL isProtocolUnderlineStyle;
@property (nonatomic) BOOL hasPolicies;
@property (copy, nonatomic) NSDictionary *policiesDict;
@property (retain, nonatomic) BDPTextView *privacyTextView;
@property (retain, nonatomic) UILabel *userInfoTips;
@property (retain, nonatomic) UILabel *unionAuthTips;
@property (retain, nonatomic) BDPPrivacyUnionAuthView *unionAuthView;
@property (retain, nonatomic) NSDictionary *unionPrivacyInfo;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSString *currentUrl;
@property (weak, nonatomic) id<BDPPrivacyRegulationContentViewDelegate> delegate;
@property (nonatomic) BOOL shouldUseUnionPrivacy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupUI:(double)a0;
- (id)initWithContent:(id)a0 height:(double)a1 fontSize:(double)a2 color:(id)a3 protocolColor:(id)a4 isProtocolUnderlineStyle:(BOOL)a5 from:(id)a6;
- (id)initWithContent:(id)a0 height:(double)a1 fontSize:(double)a2 color:(id)a3 protocolColor:(id)a4 isProtocolUnderlineStyle:(BOOL)a5 shouldUseUnionPrivacy:(BOOL)a6 unionPrivacyInfo:(id)a7 uniqueID:(id)a8 from:(id)a9;
- (void)setPrivacyDesc:(id)a0;
- (void)setPrivacyDescWithPolicies:(id)a0 mpName:(id)a1;
- (id)textClickButton;
- (void)setup_textView:(double)a0;
- (void)onTapSwitchCheckBox:(id)a0;
- (id)initWithContent:(id)a0 height:(double)a1 from:(id)a2;
- (id)initWithContent:(id)a0 height:(double)a1 shouldUseUnionPrivacy:(BOOL)a2 unionPrivacyInfo:(id)a3 uniqueID:(id)a4;
- (id)initWithHeight:(double)a0 fontSize:(double)a1 color:(id)a2 protocolColor:(id)a3 mpName:(id)a4 policies:(id)a5 isProtocolUnderlineStyle:(BOOL)a6;
- (void)updateContentTextAlignment:(long long)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
