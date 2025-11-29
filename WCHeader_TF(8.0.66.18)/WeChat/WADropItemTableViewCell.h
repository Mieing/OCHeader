@class NSString, UILabel, UIView, UIButton;
@protocol WADropItemTableViewCellDelegate;

@interface WADropItemTableViewCell : UITableViewCell {
    UIButton *_closeBtn;
    UIButton *_backBtn;
    UILabel *_titleView;
    UILabel *_contentView;
    UIView *_splitLine;
}

@property (weak, nonatomic) id<WADropItemTableViewCellDelegate> delegate;
@property (retain, nonatomic) NSString *userData;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) BOOL showSplit;

- (void)setContent:(id)a0 withTitle:(id)a1;
- (void)layoutSubviews;
- (void)onClose:(id)a0;
- (void)onSelect:(id)a0;
- (void).cxx_destruct;

@end
