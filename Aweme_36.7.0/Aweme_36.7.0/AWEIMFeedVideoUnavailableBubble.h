@class UILabel, YYLabel, NSString;

@interface AWEIMFeedVideoUnavailableBubble : UIView <AWEIMFeedVideoUnavailableBubbleInterface>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *subtitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)addSubviews;
- (void)addGestures;
- (void)handleJumpUserProfileActionIfNeeded:(id)a0 tappedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)configUIDataWithModel:(id)a0;
- (void)configFramesWithModel:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
