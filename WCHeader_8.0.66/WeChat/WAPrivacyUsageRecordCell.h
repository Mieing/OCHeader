@class UILabel, NSString;

@interface WAPrivacyUsageRecordCell : UITableViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *pluginDescLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;
+ (id)getTimeFormatString:(unsigned int)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setViewDataModel:(id)a0;
- (void)initSubviews;
- (void)onViewPositionUpdatedWithIndexPath:(id)a0 sectionItemCount:(long long)a1;
- (void).cxx_destruct;

@end
