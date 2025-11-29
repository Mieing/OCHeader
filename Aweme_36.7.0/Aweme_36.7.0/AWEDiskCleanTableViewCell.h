@class DUXButton, UILabel, UIView, AWEDiskCleanModel;

@interface AWEDiskCleanTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *descLable;
@property (retain, nonatomic) DUXButton *operationBtn;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) AWEDiskCleanModel *itemModel;
@property (copy, nonatomic) id /* block */ action;

+ (id)identifier;

- (void)updateOperationButtonInCacheType;
- (void)updateDraftStatus;
- (void)cleanAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)update;
- (void)createUI;

@end
