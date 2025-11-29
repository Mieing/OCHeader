@class UILabel, ShakeMsgItem, MMWebImageView;

@interface ShakeMsgTableViewCell : MMUIView {
    MMWebImageView *oThumbImageView;
    UILabel *oTitleLabel;
    UILabel *oDescLabel;
    UILabel *oTimeLabel;
    ShakeMsgItem *oMsgItem;
}

+ (double)heightForShakeMsgItem:(id)a0 withCellSize:(struct CGSize { double x0; double x1; })a1;

- (id)initWithShakeMsgItem:(id)a0 withCellSize:(struct CGSize { double x0; double x1; })a1;
- (void)showEdit:(BOOL)a0;
- (void)initCellView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
