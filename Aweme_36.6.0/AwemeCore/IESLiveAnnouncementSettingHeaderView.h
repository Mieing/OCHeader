@class UILabel, NSString, IESLiveAnnouncementSettingSection;

@interface IESLiveAnnouncementSettingHeaderView : UICollectionReusableView <IESLiveAnnouncementSettingSectionHeaderProtocol>

@property (retain, nonatomic) IESLiveAnnouncementSettingSection *model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIWithSectionModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
