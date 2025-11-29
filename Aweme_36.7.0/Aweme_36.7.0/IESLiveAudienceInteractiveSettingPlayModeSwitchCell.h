@class NSMutableArray;

@interface IESLiveAudienceInteractiveSettingPlayModeSwitchCell : UITableViewCell

@property (class, readonly, nonatomic) unsigned long long maxSubcellsCount;

@property (retain, nonatomic) NSMutableArray *switchViews;

- (void)updateWithConfigurations:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
