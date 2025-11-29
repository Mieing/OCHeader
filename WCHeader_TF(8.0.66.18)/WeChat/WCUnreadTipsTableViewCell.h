@class WCUnreadTipsViewModel, UILabel, NSMutableArray, MMUIButton;
@protocol WCUnreadTipsTableViewCellDelegate;

@interface WCUnreadTipsTableViewCell : MMTableViewCell

@property (retain, nonatomic) NSMutableArray *headerViews;
@property (retain, nonatomic) MMUIButton *defaultButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WCUnreadTipsViewModel *vm;
@property (weak, nonatomic) id<WCUnreadTipsTableViewCellDelegate> delegate;

+ (double)cellHeight;

- (void)updateViewModel:(id)a0;
- (void)layoutSubviews;
- (id)genHeadImageView;
- (void)onJumpToUnreadItem;
- (void).cxx_destruct;

@end
