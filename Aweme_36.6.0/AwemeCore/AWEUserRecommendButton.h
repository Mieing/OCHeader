@class AWEUserRecommendButtonColorModel;

@interface AWEUserRecommendButton : AFDButton

@property (nonatomic) BOOL isAttentionState;
@property (retain, nonatomic) AWEUserRecommendButtonColorModel *colorModel;

- (void)updateWithFollowStatus:(long long)a0 followerStatus:(long long)a1;
- (void)p_updateColors;
- (void)updateWithFollowStatus:(long long)a0 followerStatus:(long long)a1 preferredTitle:(id)a2;
- (void)updateWithFollowStatus:(long long)a0 followerStatus:(long long)a1 preferredTitle:(id)a2 scene:(id)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
