@class NSString, AWEAnimatedButton, AWEUserModel;

@interface AWEFamiliarRelationView : UIView <AWEFamiliarRelationViewProtocol>

@property (retain, nonatomic) AWEAnimatedButton *relationButton;
@property (retain, nonatomic) AWEAnimatedButton *dislikeButton;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isShowOnBulletScreen;
@property (copy, nonatomic) id /* block */ didFollowBlock;
@property (copy, nonatomic) id /* block */ didUnFollowBlock;
@property (copy, nonatomic) id /* block */ didDislikeBlock;
@property (copy, nonatomic) id /* block */ didClickContactBlock;
@property (copy, nonatomic) id /* block */ didRemoveContactBlock;
@property (copy, nonatomic) id /* block */ trackExtraValuesBlock;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferedButtonWidthWithStyle:(long long)a0;
+ (double)preferedWidthWithStyle:(long long)a0;

- (id)initWithStyle:(long long)a0 isShowOnBulletScreen:(BOOL)a1;
- (void)p_refreshUIAnimated:(BOOL)a0;
- (void)trackWithFollowStatus:(BOOL)a0;
- (void)trackDislike;
- (void)p_didClickRelationBtn:(id)a0;
- (void)p_didClickDislikeBtn:(id)a0;
- (void)p_setupUI;
- (void)setFamiliarUser:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
