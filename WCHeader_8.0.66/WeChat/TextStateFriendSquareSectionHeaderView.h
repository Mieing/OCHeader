@class NSString, TextStateTopicModel, MMWebImageView, UIView, MMUILabel;

@interface TextStateFriendSquareSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) NSString *ownTopicId;
@property (retain, nonatomic) TextStateTopicModel *friendTopic;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *clusterLabel;
@property (nonatomic) long long section;
@property (retain, nonatomic) UIView *bottomView;

+ (double)alignX;
+ (double)heightForSection:(long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)initLayout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setOwnTopicId:(id)a0 friendTopic:(id)a1 section:(long long)a2;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
