@class NSString, UIImageView, UILabel, UIView;

@interface IESLivePSActionSheetCommonItemCell : UITableViewCell <IESLivePSActionSheetItemViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *redDot;
@property (copy, nonatomic) id /* block */ didClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateItemCellTitle:(id)a0;
- (void)updateItemCellRedDot:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)singleTap:(id)a0;

@end
