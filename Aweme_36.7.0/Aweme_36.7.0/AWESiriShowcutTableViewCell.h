@class AWESiriShowCutModel, NSString, UILabel, UIView, DUXAbandonedButton;

@interface AWESiriShowcutTableViewCell : UITableViewCell <AWEUserSettingBigFontAdapterProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) DUXAbandonedButton *addOrEditShowCutButton;
@property (retain, nonatomic) UIView *cellBackgroundView;
@property (retain, nonatomic) AWESiriShowCutModel *shortcutModel;
@property (copy, nonatomic) id /* block */ clickAddOrEditButtonBlock;
@property (nonatomic) BOOL bigFontModeEnable;
@property (nonatomic) BOOL modernBigFontEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)adaptiveFontOfSize:(double)a0 weight:(long long)a1;
- (void)addOrEditAction;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)createUI;

@end
