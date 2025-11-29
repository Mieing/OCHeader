@class UIStackView, UIView, CJPayAuthAgreementContentModel, UIImageView, NSDictionary, CJPayAuthVerifiedTipsItemView, CJPayStyleButton, CJPayCommonProtocolView, CJPayButton, UILabel;

@interface CJPayAuthVerifiedView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *sepView;
@property (retain, nonatomic) UIImageView *exclamatoryMarkImageView;
@property (retain, nonatomic) UILabel *tipsTitleLabel;
@property (retain, nonatomic) CJPayAuthVerifiedTipsItemView *tipsItemView;
@property (retain, nonatomic) UIStackView *tipsStackView;
@property (retain, nonatomic) CJPayStyleButton *authButton;
@property (retain, nonatomic) CJPayButton *notMeButton;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (copy, nonatomic) NSDictionary *customStyle;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) CJPayAuthAgreementContentModel *model;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ logoutBlock;
@property (copy, nonatomic) id /* block */ notMeBlock;
@property (copy, nonatomic) id /* block */ authVerifiedBlock;
@property (copy, nonatomic) id /* block */ protocolClickedBlock;
@property (copy, nonatomic) id /* block */ clickExclamatoryMarkBlock;

- (id)p_pageName;
- (void)p_tapCloseImageView;
- (void)p_authButtonTapped;
- (void)p_notMeButtonTapped;
- (void)p_tapExclamatoryMarkImageView;
- (void)hideExclamatoryMark:(BOOL)a0;
- (void)updateWithCommonModel:(id)a0;
- (id)p_getAttributeStringWithProtocolArray:(id)a0 withGuide:(id)a1 withSeperate:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (id)initWithStyle:(id)a0;
- (void)updateWithModel:(id)a0;

@end
