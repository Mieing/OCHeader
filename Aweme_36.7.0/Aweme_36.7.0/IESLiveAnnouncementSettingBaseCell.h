@class NSString, UIView, UILabel, IESLiveAnnouncementSettingBaseItem;

@interface IESLiveAnnouncementSettingBaseCell : UICollectionViewCell <IESLiveAnnouncementSettingCellProtocol>

@property (retain, nonatomic) IESLiveAnnouncementSettingBaseItem *model;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIWithItemModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
