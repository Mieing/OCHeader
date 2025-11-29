@protocol MFTitleViewDelegate;

@interface MFTitleView : MMTitleView

@property (weak, nonatomic) id<MFTitleViewDelegate> delegate;

- (id)init;
- (void)updateSubviews;
- (void)updateNearMode;
- (void)updateLimitedMode;
- (void)updateSilentMode;
- (void)updateRightIconsWithColor:(id)a0;
- (void)updateTitleColor:(id)a0;
- (void)updateTitleView:(unsigned int)a0 title:(id)a1;
- (void)updateTitleColor:(id)a0 earpieceModeColor:(id)a1 alpha:(double)a2 animated:(BOOL)a3;

@end
