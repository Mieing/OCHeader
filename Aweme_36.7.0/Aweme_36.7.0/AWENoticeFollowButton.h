@class NSString;

@interface AWENoticeFollowButton : AWEUIListCellActionButton <AWEFollowButtonProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredButtonWidth;

- (void)updateWithFollowStatus:(long long)a0 followerStatus:(long long)a1;
- (void)updateWithFollowStatus:(long long)a0 followerStatus:(long long)a1 preferredTitle:(id)a2 secUid:(id)a3;
- (void)setupColorMode;
- (void)updateEdgeInsets:(BOOL)a0;
- (void)updateWithFollowStatus:(long long)a0 followerStatus:(long long)a1 preferredTitle:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
