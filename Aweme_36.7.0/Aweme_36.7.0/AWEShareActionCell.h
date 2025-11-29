@class NSString, AWEShareSaveAlertButton, AWEShareActionCellModel, UIButton;
@protocol AWEShareActionCellDelegate, AWEShareSaveTableViewCellDelegate;

@interface AWEShareActionCell : UITableViewCell <AWEShareSaveTableViewCellProtocol>

@property (retain, nonatomic) AWEShareSaveAlertButton *button;
@property (retain, nonatomic) AWEShareActionCellModel *cellModel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (weak, nonatomic) id<AWEShareActionCellDelegate> delegate;
@property (copy, nonatomic) id /* block */ shouldEnableCancelButton;
@property (weak, nonatomic) id<AWEShareSaveTableViewCellDelegate> shareDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)generateCancelButton:(id)a0;
- (void)bindCompletion:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)cancelButtonTapped:(id)a0;
- (void)actionButtonTapped:(id)a0;
- (void)updateWithViewModel:(id)a0;

@end
