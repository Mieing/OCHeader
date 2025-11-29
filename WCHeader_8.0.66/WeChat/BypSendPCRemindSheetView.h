@class UILabel, UIView, MMWebImageView;

@interface BypSendPCRemindSheetView : MMPageSheetBaseView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UIView *contentView;

- (id)initWithTitle:(id)a0 iconUrl:(id)a1 desc:(id)a2;
- (void)initSubviews:(id)a0 iconUrl:(id)a1 desc:(id)a2;
- (void)layoutSubviews;
- (void)fitSubViews;
- (void)setImageWithUrl:(id)a0;
- (void).cxx_destruct;

@end
