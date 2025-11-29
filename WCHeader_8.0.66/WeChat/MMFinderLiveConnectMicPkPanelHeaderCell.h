@class UILabel, NSString, MMUIButton;
@protocol MMFinderLiveConnectMicPkPanelCellDelegate;

@interface MMFinderLiveConnectMicPkPanelHeaderCell : UITableViewCell <MMFinderLiveConnectMicPkPanelCellBase>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) MMUIButton *button;
@property (nonatomic) unsigned long long buttonType;
@property (weak, nonatomic) id<MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ReuseIdentifier;
+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)onTapButton;
- (void)updateWithTitle:(id)a0;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
