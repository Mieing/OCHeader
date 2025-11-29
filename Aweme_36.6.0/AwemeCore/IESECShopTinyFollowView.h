@class UIImageView, NSString;
@protocol IESECShopMultipleFunctionsFollowViewDelegate;

@interface IESECShopTinyFollowView : UIView <IESECShopFollowView>

@property (retain, nonatomic) UIImageView *followView;
@property (retain, nonatomic) UIImageView *notFollowView;
@property (weak, nonatomic) id<IESECShopMultipleFunctionsFollowViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchFollowViewMode:(unsigned long long)a0;
- (void)tapNotFollow;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpView;

@end
