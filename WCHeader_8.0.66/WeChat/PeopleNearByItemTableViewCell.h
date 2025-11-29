@class UIImageView, UILabel, UIView, MMHeadImageView;

@interface PeopleNearByItemTableViewCell : MMTableViewCell {
    UILabel *m_nickNameLabel;
    UILabel *m_personalRemarkLabel;
    UILabel *m_remarkContainer;
    UILabel *m_distanceLabel;
    UILabel *m_addedLabel;
    UIImageView *m_genderImageView;
    UIImageView *m_remarkBKImage;
    UIView *m_headerView;
    UIImageView *m_albumFlagView;
    long long m_iAlbumFlag;
    unsigned int m_certificationFlag;
    int m_sex;
    MMHeadImageView *m_imageView;
}

@property (retain, nonatomic) UIImageView *finderFlagView;
@property (nonatomic) unsigned long long finderFlag;
@property (nonatomic) BOOL showGenderIcon;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initViews;
- (void)updateWithLbsContactInfo:(id)a0 withHeaderView:(id)a1;
- (void)updateConstraints;
- (void).cxx_destruct;

@end
