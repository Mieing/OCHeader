@class MMUILabel, NSString, RichTextView, UIButton;

@interface ChatRoomBaseUpgradeOpenIMViewController : MMAcceptAgreementBaseViewController <ILinkEventExt>

@property (retain, nonatomic) MMUILabel *m_topTitleLabel;
@property (retain, nonatomic) RichTextView *m_titleTextView;
@property (retain, nonatomic) MMUILabel *m_contentTextLabel;
@property (retain, nonatomic) UIButton *m_iAcceptBtn;
@property (retain, nonatomic) NSString *m_titleText;
@property (retain, nonatomic) NSString *m_contentText;
@property (retain, nonatomic) NSString *m_topTitleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUpNavigation;
- (void)layoutTopTitleLable;
- (void)layoutTitleTextView;
- (void)layoutContentTextLabel;
- (void)layoutIAcceptBtn;
- (void)doIAccept;
- (void)onCancel;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
