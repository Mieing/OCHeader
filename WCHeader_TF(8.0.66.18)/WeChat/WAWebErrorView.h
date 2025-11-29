@class MMUIButton, NSString, WAContact, UIButton, MMWebImageView, NSObject, MMUILabel;
@protocol WAWebErrorViewDelegate;

@interface WAWebErrorView : MMUIView <MMWebImageViewDelegate> {
    WAContact *m_contact;
    NSString *m_title;
    NSString *m_desc;
    NSString *m_buttonTitle;
    MMUILabel *m_descLabel;
    MMUIButton *_quitButton;
    BOOL m_isNeedGray;
    BOOL m_isSupportDark;
    MMWebImageView *m_logoView;
    MMUILabel *m_titleLabel;
    UIButton *m_operationButton;
}

@property (weak, nonatomic) NSObject<WAWebErrorViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserName:(id)a0 title:(id)a1 desc:(id)a2 supportDark:(BOOL)a3;
- (id)initWithUserName:(id)a0 title:(id)a1 desc:(id)a2 buttonTitle:(id)a3 needGrayed:(BOOL)a4 supportDark:(BOOL)a5;
- (void)layoutSubviews;
- (void)initLogoView;
- (void)initTitleLabel;
- (void)showQuitButton;
- (void)onClickQuitButton;
- (void)initDescLabel;
- (void)initOperationButton;
- (void)onLoadImageOK:(id)a0;
- (void)onOperationButtonTapped:(id)a0;
- (void).cxx_destruct;

@end
