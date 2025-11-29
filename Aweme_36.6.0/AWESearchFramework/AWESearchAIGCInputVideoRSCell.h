@class AWESearchAIGCVideoRSModel, UIImageView, UILabel, UIView, UITapGestureRecognizer;
@protocol AWESearchAIGCInputVideoRSCellDelegate;

@interface AWESearchAIGCInputVideoRSCell : UITableViewCell

@property (retain, nonatomic) UIView *borderContainerView;
@property (retain, nonatomic) UILabel *queryTextLabel;
@property (retain, nonatomic) UIImageView *queryImageView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AWESearchAIGCVideoRSModel *model;
@property (weak, nonatomic) id<AWESearchAIGCInputVideoRSCellDelegate> delegate;

+ (double)viewHeightWithModel:(id)a0;
+ (id)queryTextLabelFont;
+ (id)identifier;

- (void)videoRSCellTouched:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithModel:(id)a0;

@end
