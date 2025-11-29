@class FinderHistoryLiveInfo, MMUILabel, MMUIImageView;
@protocol MMFinderHistoryLiveInfoCellDelegate;

@interface MMFinderHistoryLiveInfoCell : MMTableViewCell

@property (retain, nonatomic) MMUILabel *liveTimeLabel;
@property (retain, nonatomic) MMUILabel *liveDescriptionLabel;
@property (retain, nonatomic) MMUIImageView *liveIconView;
@property (retain, nonatomic) MMUILabel *viewersLabel;
@property (retain, nonatomic) FinderHistoryLiveInfo *historyLiveInfo;
@property (retain, nonatomic) MMUIImageView *arrowIconView;
@property (nonatomic) BOOL isSelfAnchor;
@property (weak, nonatomic) id<MMFinderHistoryLiveInfoCellDelegate> logicDelegate;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithHistoryLiveInfo:(id)a0 isSelfAnchor:(BOOL)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
