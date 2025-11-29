@class UILabel, UIImageView, NSString;

@interface WAAuthorizeUserIdPhoneCell : UITableViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *markView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0;

- (void)setViewDataModel:(id)a0;
- (void)onViewPositionUpdatedWithIndexPath:(id)a0 sectionItemCount:(long long)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)setMark:(BOOL)a0;
- (void)setWXPhone:(BOOL)a0;
- (void).cxx_destruct;

@end
