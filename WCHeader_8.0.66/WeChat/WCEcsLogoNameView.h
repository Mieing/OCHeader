@class UIFont, NSString, UIImageView, EcsShareSnsInfo, WCDataItem, InteractionLabel;

@interface WCEcsLogoNameView : MMUIButton

@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) InteractionLabel *nameLabel;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) EcsShareSnsInfo *shareInfo;
@property (retain, nonatomic) NSString *feedTailText;
@property (retain, nonatomic) NSString *snsFeedId;
@property (retain, nonatomic) WCDataItem *dataItem;

- (id)initWithEcsShareSnsInfo:(id)a0 scene:(unsigned long long)a1;
- (void)updateWithEcsShareSnsInfo:(id)a0 scene:(unsigned long long)a1;
- (void)initLogoImageView;
- (void)initNameLabelWithName:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onEcsLogoNameViewClick:(id)a0;
- (void)onWillDisplay;
- (void)configFeedTailReport;
- (id)genFeedTailReportDict;
- (void).cxx_destruct;

@end
