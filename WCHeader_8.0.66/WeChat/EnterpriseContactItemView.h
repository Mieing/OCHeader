@class CEnterpriseContact, MMCPLabel, UIButton, UILabel, MMHeadImageView;
@protocol EnterpriseContactItemViewDelegate;

@interface EnterpriseContactItemView : MMUIView {
    CEnterpriseContact *_contact;
    MMCPLabel *_nickNameLabel;
    MMHeadImageView *_headImage;
    UIButton *_rightButton;
    UILabel *_memberCountLabel;
}

@property (weak, nonatomic) id<EnterpriseContactItemViewDelegate> delegate;

+ (double)cellHeight;

- (void)layoutSubviews;
- (void)initView:(id)a0;
- (void)updateView:(id)a0;
- (void)initHeadImageForContact:(id)a0;
- (void)initNickNameLabel:(id)a0;
- (void)initMemberCountLabel:(id)a0;
- (void)updateHeadImageForContact:(id)a0;
- (void)updateNickNameLabel;
- (void)initGreyRightButton:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcNickNameFrame:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcMemberCountFrame:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcRightButtonFrame:(id)a0;
- (void)onRightBtnClicked;
- (void).cxx_destruct;

@end
