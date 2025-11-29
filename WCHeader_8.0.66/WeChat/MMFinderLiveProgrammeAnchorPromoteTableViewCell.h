@class UIImageView, UIView, MMFinderLiveProgrammeAnchorPromoteInfo, MMUILabel;

@interface MMFinderLiveProgrammeAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *startTimeLabel;
@property (retain, nonatomic) UIView *splitView;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) MMFinderLiveProgrammeAnchorPromoteInfo *programmaPromoteInfo;

+ (id)identifier;

- (void)layoutUI;
- (void)updatePromoteInfo:(id)a0;
- (id)promoteInfo;
- (BOOL)enableMenuAction;
- (void)layoutIconImgView;
- (void)layoutTitleLabel;
- (void)layoutStartTimeLabel;
- (void)layoutSplitView;
- (void)layoutDetailLabel;
- (void)updateLabelsOriginY;
- (void).cxx_destruct;

@end
