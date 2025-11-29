@class BDSCControlButton;

@interface BDSCLongVideoActionView : BDSCVideoActionView

@property (retain, nonatomic) BDSCControlButton *closeCastButton;
@property (retain, nonatomic) BDSCControlButton *changeClarityButton;

- (void)updateClarityGreyMode:(BOOL)a0;
- (void)updateClarityTitle:(id)a0;
- (void)updateCloseGreyMode:(BOOL)a0;
- (void)updateBigStyle:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
