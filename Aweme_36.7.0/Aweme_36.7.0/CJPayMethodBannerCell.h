@class NSString, CJPayButton, CJPayChannelBizModel, UILabel, UIView;

@interface CJPayMethodBannerCell : UITableViewCell <CJPayMethodDataUpdateProtocol>

@property (retain, nonatomic) UIView *bannerView;
@property (retain, nonatomic) UILabel *bannerTextLabel;
@property (retain, nonatomic) CJPayButton *bannerButton;
@property (copy, nonatomic) NSString *labelAction;
@property (retain, nonatomic) CJPayChannelBizModel *bizModel;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) CJPayButton *combinePayButton;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calHeight:(id)a0;

- (void)p_bannerButtonClick;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateContent:(id)a0;

@end
