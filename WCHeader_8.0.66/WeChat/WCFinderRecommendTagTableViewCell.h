@class MMUILabel, UIView;
@protocol WCFinderRecommendTagTableViewCellDelegate;

@interface WCFinderRecommendTagTableViewCell : MMTableViewCell

@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) MMUILabel *topicLabel;
@property (retain, nonatomic) MMUILabel *topicNumberLabel;
@property (weak, nonatomic) id<WCFinderRecommendTagTableViewCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setUpUI;
- (void)initSeperateLine;
- (void)initTopicLabel;
- (void)initTopicHotNumberLabel;
- (void)updateWithModel:(id)a0 width:(double)a1;
- (void)onClickTagCell;
- (void).cxx_destruct;

@end
