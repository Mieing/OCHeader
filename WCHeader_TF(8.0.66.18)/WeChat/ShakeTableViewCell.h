@class UILabel, UIImageView, UIView;

@interface ShakeTableViewCell : MMTableViewCell {
    UILabel *m_nickNameLabel;
    UILabel *m_personalRemarkLabel;
    UILabel *m_distanceLabel;
    UILabel *m_addedLabel;
    UIImageView *m_genderImageView;
    UIImageView *m_remarkBKImage;
    UIView *m_headerView;
}

- (BOOL)isInMyContactList:(id)a0;
- (void)initSubviews;
- (void)updateWithLbsContactInfo:(id)a0 withHeaderView:(id)a1;
- (void)hideSubViews;
- (void).cxx_destruct;

@end
