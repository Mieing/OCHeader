@class UIImageView, UILabel, NSString;

@interface IESLivePSActionSheetTopItemView : UIView <IESLivePSActionSheetItemViewProtocol>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ didClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithItemTitle:(id)a0 iconImage:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)singleTap:(id)a0;

@end
