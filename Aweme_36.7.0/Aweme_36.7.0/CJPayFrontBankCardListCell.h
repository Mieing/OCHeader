@class CJPayStyleCheckMark, CJPayChannelBizModel, UIImageView, NSString, UILabel, UIView;

@interface CJPayFrontBankCardListCell : UITableViewCell <CJPayMethodDataUpdateProtocol>

@property (retain, nonatomic) UIImageView *bankIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayStyleCheckMark *selectImageView;
@property (retain, nonatomic) UIView *disableView;
@property (retain, nonatomic) CJPayChannelBizModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calHeight:(id)a0;

- (void)p_enableCell:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateContent:(id)a0;

@end
