@class NSString;

@interface AWEIMLongPressShareAvatarLabel : UILabel <InteractionElementPopoverCellCustomContentProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willBeginFocusedAnimation;
- (void)didBeginFocusedAnimation;
- (void)willBeginUnfocusedAnimation;
- (void)didBeginUnfocusedAnimation;
- (double)contentSpace;
- (id)init;
- (struct CGSize { double x0; double x1; })contentSize;

@end
