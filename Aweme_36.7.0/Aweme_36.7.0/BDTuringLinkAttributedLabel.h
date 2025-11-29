@class UILabel, BDTuringLinkAttributedItem;

@interface BDTuringLinkAttributedLabel : UIView

@property (retain, nonatomic) BDTuringLinkAttributedItem *item;
@property (retain, nonatomic) UILabel *textLabel;

- (double)contentHeight;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (void)setupUI;
- (void)handleTap:(id)a0;

@end
