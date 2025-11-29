@protocol WCFinderMoreHotContentTableViewCellDelegate;

@interface WCFinderFullMoreHotContentTableViewCell : UITableViewCell

@property (weak, nonatomic) id<WCFinderMoreHotContentTableViewCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (void)setupUI;
- (void)transferToRecommond;
- (void).cxx_destruct;

@end
