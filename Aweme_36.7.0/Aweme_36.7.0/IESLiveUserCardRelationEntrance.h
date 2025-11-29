@class NSString, UIImageView, IESLiveActionConfig, UILabel, IESLiveUserCardStore, IESLivePotentialCustomerInfo;

@interface IESLiveUserCardRelationEntrance : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) NSString *messageType;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) IESLiveActionConfig *config;
@property (retain, nonatomic) IESLivePotentialCustomerInfo *potentialCustomerInfo;

- (id)initWithStore:(id)a0 potentialVisitorInfo:(id)a1;
- (id)initWithStore:(id)a0 actionConfig:(id)a1;
- (double)widthOfRelationEntrance;
- (void)setMessageType;
- (void)actionToShowUserRelationPage:(id)a0;
- (void)trackUserRelationEntranceClicked;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;

@end
