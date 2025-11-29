@class UIImageView, UILabel;

@interface AWENearbyMultiAudioUserSlotView : UIView

@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UILabel *nameLabel;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) long long index;

- (void)layoutUIWithUser:(id)a0 room:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 user:(id)a1 room:(id)a2 isAnchor:(BOOL)a3;
- (void).cxx_destruct;

@end
