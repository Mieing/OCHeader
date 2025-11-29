@class WAProfileEasyBuyIconView, NSString, GetProfileInfoResponse_RelievedBuyInfo, UILabel, UIButton;

@interface WAProfileEasyBuyCell : UITableViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) WAProfileEasyBuyIconView *iconView;
@property (retain, nonatomic) UIButton *cardView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) GetProfileInfoResponse_RelievedBuyInfo *infoModel;
@property (copy, nonatomic) id /* block */ viewEventAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0;

@end
