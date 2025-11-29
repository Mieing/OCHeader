@class NSString, UIImageView, UILabel, UIView;

@interface AFDRecommendToFriendEntranceLabel : UIView <AFDRecommendToFriendEntranceLabelProtocol>

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UIView *separateLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)configWithModel:(id)a0;
- (double)iconViewWidth;
- (void)p_configRecommendEntranceLabelWithRightArrow:(BOOL)a0;
- (id)iconViewImage;
- (id)p_textColor;
- (BOOL)p_needHideRightArrow;
- (void).cxx_destruct;
- (id)init;

@end
