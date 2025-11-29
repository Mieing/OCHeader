@class NSString, UITextField, UILabel, UIView, IESECLiveAnchorCreateFlashSaleItem;
@protocol IESECLiveAnchorFlashSaleCreateViewCellDelegate;

@interface IESECLiveAnchorFlashSaleCreateViewCell : UITableViewCell <UITextFieldDelegate>

@property (retain, nonatomic) UILabel *propertyLabel;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *item;
@property (weak, nonatomic) id<IESECLiveAnchorFlashSaleCreateViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setItem:(id)a0 showWarn:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;

@end
