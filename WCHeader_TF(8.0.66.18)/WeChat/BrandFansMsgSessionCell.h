@class BrandFansMsgSessionCellViewModel;

@interface BrandFansMsgSessionCell : MMBaseSessionTableViewCell

@property (retain, nonatomic) BrandFansMsgSessionCellViewModel *viewModel;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (void)updateWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
