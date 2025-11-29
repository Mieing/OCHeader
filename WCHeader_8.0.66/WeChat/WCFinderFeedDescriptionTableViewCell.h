@class UILabel, UIButton, UIView;
@protocol WCFinderFeedDescriptionTableViewCellDelegate;

@interface WCFinderFeedDescriptionTableViewCell : UITableViewCell

@property (weak, nonatomic) UILabel *descriptionLabel;
@property (weak, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *actionButtonBGView;
@property (nonatomic) BOOL addActionShadow;
@property (nonatomic) BOOL setMoreActionFloat;
@property (nonatomic) double floatTopY;
@property (weak, nonatomic) id<WCFinderFeedDescriptionTableViewCellDelegate> delegate;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL timelineNoMoreCanShowHotSwitch;
@property (nonatomic) unsigned long long curSection;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (double)getFloatViewBeginY;
- (void)layoutSubviews;
- (void)clickAction:(id)a0;
- (id)moreActionView;
- (void)setMoreButtonFloat;
- (void).cxx_destruct;

@end
