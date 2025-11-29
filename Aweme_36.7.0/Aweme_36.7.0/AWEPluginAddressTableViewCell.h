@class UIImageView, UILabel, UIView;
@protocol AWEAddressTableViewCellDelegate;

@interface AWEPluginAddressTableViewCell : UITableViewCell {
    UILabel *_nameLabel;
    UILabel *_telLabel;
    UILabel *_addressLabel;
    UIView *_seperatorView;
}

@property (retain, nonatomic) UIImageView *selectView;
@property (retain, nonatomic) UIImageView *editImgView;
@property (weak, nonatomic) id<AWEAddressTableViewCellDelegate> delegate;

+ (double)calculateCellHeightForModel:(id)a0;
+ (id)getAddressStringWithModel:(id)a0;

- (void)initCellComponent;
- (void)editBtnClick;
- (void)setSeperatorHidden:(BOOL)a0;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
