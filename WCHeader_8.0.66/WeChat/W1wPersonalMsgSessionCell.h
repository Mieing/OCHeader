@class W1wPersonalMsgSessionCellViewModel;

@interface W1wPersonalMsgSessionCell : MMBaseSessionTableViewCell

@property (retain, nonatomic) W1wPersonalMsgSessionCellViewModel *viewModel;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (void)updateWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
