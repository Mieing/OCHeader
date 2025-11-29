@class NSString;

@interface AWEFavoriteLongPressCollectsLabel : UILabel <InteractionElementPopoverCellCustomContentProtocol>

@property (copy, nonatomic) id /* block */ didBeginFocusedBlock;
@property (copy, nonatomic) id /* block */ didEndUnfocusedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willBeginFocusedAnimation;
- (void)didBeginFocusedAnimation;
- (void)didEndFocusedAnimation;
- (void)willBeginUnfocusedAnimation;
- (void)didBeginUnfocusedAnimation;
- (void)didEndUnfocusedAnimation;
- (double)contentSpace;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })contentSize;

@end
