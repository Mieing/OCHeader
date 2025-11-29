@class NSString, UIImageView, UILabel, AWELiveExpoundCardBizAttributeCellViewModel;

@interface AWELiveExpoundCardBizAttributeCell : UITableViewCell <AWELiveExpoundCardBizAttributeCellProtocol>

@property (retain, nonatomic) AWELiveExpoundCardBizAttributeCellViewModel *viewModel;
@property (retain, nonatomic) UILabel *keyLabel;
@property (retain, nonatomic) UIImageView *contentIcon;
@property (retain, nonatomic) UILabel *contentLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupUI;

@end
