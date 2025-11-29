@class MMFinderLivePromoteDisplayLeaseToken, NSString, UIImageView, UILabel, UIView, MMUIButton;

@interface MMFinderLiveConnectMicRandomHintView : UIView <MMFinderLivePromoteDisplayLeaseTokenDelegate, MMLiveConnectMicExt>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) MMUIButton *applyButton;
@property (retain, nonatomic) MMFinderLivePromoteDisplayLeaseToken *displayLeaseToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithGuideInfo:(id)a0 displayLeaseToken:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)onApplyButtonTapped;
- (void)onLiveCanApplyConnecteMicChanged:(BOOL)a0;
- (void)onPromoteDisplayLeaseViewAttached:(id)a0;
- (void)onPromoteDisplayLeaseInvalidated:(id)a0 forReason:(unsigned long long)a1;
- (void).cxx_destruct;

@end
