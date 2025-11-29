@class NSString, MMHeadImageView, MMUIView, MMUIScrollView, UIButton, MMOpenIMAddContactRemindViewView, MMUILabel, CContact, MMUIButton;
@protocol OpenIMAddContactRemindDelegate;

@interface OpenIMAddContactRemindHalfScreenViewController : MMUIHalfScreenViewController {
    UIButton *m_makeSureButton;
    MMUIView *m_contentView;
    MMUILabel *m_titleView;
    MMHeadImageView *m_headImageView;
    MMUILabel *m_descContentView;
    MMUIScrollView *m_contentScrollView;
    MMUILabel *m_nickNameTextLabel;
    MMUILabel *m_nickNamePostTextLabel;
    double m_contentViewTop;
    MMOpenIMAddContactRemindViewView *m_maskView;
    double m_descContentViewHeight;
    MMUIButton *_closeButton;
}

@property (retain, nonatomic) CContact *m_contact;
@property (retain, nonatomic) NSString *m_nsDescContent;
@property (weak, nonatomic) id<OpenIMAddContactRemindDelegate> m_delegate;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)closeButton;
- (void)layoutHalfScreenView;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutContentScrollView;
- (void)layoutTitleView;
- (void)layoutHeadView;
- (void)layoutNickNameTextLabel;
- (void)layoutNickNamePostTextLabel;
- (void)layoutDescContentView;
- (void)layoutMakeMaskView;
- (void)layoutMakeSureButton;
- (void)onClickClose:(id)a0;
- (void)OnMakeSureButtionClick;
- (id)navigationBarBackgroundColor;
- (void)setCloseButton:(id)a0;
- (void).cxx_destruct;

@end
