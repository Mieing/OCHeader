@class UILabel, NSString, UIView;
@protocol MMFinderLiveConnectMicPkPanelCellDelegate;

@interface MMFinderLiveConnectMicPkPanelTeamupNumberCell : UITableViewCell <MMFinderLiveConnectMicPkPanelCellBase>

@property (retain, nonatomic) UIView *bottomSeparatorLine;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) id<MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ReuseIdentifier;
+ (double)cellHeight;

@end
