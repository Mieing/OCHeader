@class NSString, BDPAboutPrivacyRegulationContentView, UILabel, NSMutableArray;
@protocol BDPAboutSubjectViewDelegate;

@interface BDPAboutSubjectView : UIView {
    UILabel *_corpTitleLabel;
    UILabel *_corpDescLabel;
    UILabel *_verTitleLabel;
    UILabel *_verDescLabel;
    UILabel *_uptTitleLabel;
    UILabel *_uptDesclabel;
    UILabel *_domainTitleLabel;
}

@property (retain, nonatomic) UILabel *privacyTitleLabel;
@property (retain, nonatomic) NSMutableArray *domainList;
@property (nonatomic) BOOL showAllDomains;
@property (retain, nonatomic) UILabel *foldDomainsLabel;
@property (retain, nonatomic) UILabel *unfoldDomainsLabel;
@property (retain, nonatomic) UILabel *docketNumberTitleLabel;
@property (retain, nonatomic) UILabel *docketNumberDescLabel;
@property (nonatomic) BOOL showDocketNumber;
@property (copy, nonatomic) NSString *docketUrl;
@property (retain, nonatomic) UILabel *merchantTitleLabel;
@property (retain, nonatomic) UILabel *merchantDescLabel;
@property (nonatomic) BOOL showMerchant;
@property (copy, nonatomic) NSString *merchantUrl;
@property (weak, nonatomic) id<BDPAboutSubjectViewDelegate> delegate;
@property (retain, nonatomic) BDPAboutPrivacyRegulationContentView *privacyView;

- (void)setCorpName:(id)a0;
- (void)setPrivacyDesc:(id)a0;
- (void)setMerchantName:(id)a0 showMerchant:(BOOL)a1 merchantUrl:(id)a2;
- (void)setDocketNumber:(id)a0 showDocketNumber:(BOOL)a1 docketUrl:(id)a2;
- (void)clickDomainsUnfold;
- (void)clickDomainsFold;
- (void)onTapDocketDescLabel;
- (void)onTapMerchantDescLabel;
- (void)clearDomainLabels;
- (void).cxx_destruct;
- (void)setVersion:(id)a0;
- (id)init;
- (void)setDomains:(id)a0;
- (void)layoutSubviews;
- (void)setUpdateTime:(id)a0;
- (void)setupViews;

@end
