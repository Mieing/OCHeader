@class UILabel, NSString;
@protocol MMFinderLiveConnectMicPkPanelCellDelegate;

@interface MMFinderLiveConnectMicPkPanelNoneAudienceCell : UITableViewCell <MMFinderLiveConnectMicPkPanelCellBase>

@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) id<MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;
+ (id)ReuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
