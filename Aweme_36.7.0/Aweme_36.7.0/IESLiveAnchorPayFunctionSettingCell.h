@class IESLiveAnchorPayFunctionSettingCellItem, UIImageView, UISwitch, UILabel, IESLiveImageTextView, UIView;
@protocol IESLiveAnchorPayFunctionSettingCellDelegate;

@interface IESLiveAnchorPayFunctionSettingCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitlelabel;
@property (retain, nonatomic) IESLiveImageTextView *textArrowView;
@property (retain, nonatomic) UIImageView *selectionView;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UIView *switchInterceptView;
@property (retain, nonatomic) IESLiveAnchorPayFunctionSettingCellItem *item;
@property (weak, nonatomic) id<IESLiveAnchorPayFunctionSettingCellDelegate> delegate;
@property (retain, nonatomic) UISwitch *switchView;

- (void)renderWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupViews;
- (void)toggleAction;

@end
