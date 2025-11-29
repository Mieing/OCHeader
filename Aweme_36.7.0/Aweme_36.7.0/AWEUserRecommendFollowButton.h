@class NSString;

@interface AWEUserRecommendFollowButton : AWEUIListCellActionButton <AWEUserRecommendFollowButtonProtocol>

@property (nonatomic) BOOL isConstColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithFollowStatus:(long long)a0 followerStatus:(long long)a1;
- (void)updateWithFollowStatus:(long long)a0 followerStatus:(long long)a1 preferredTitle:(id)a2;
- (void)updateWithFollowStatus:(long long)a0 followerStatus:(long long)a1 preferredTitle:(id)a2 scene:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isConstColor:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
