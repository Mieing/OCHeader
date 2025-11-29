@interface RingBackSwitchCellHandler : WCTableViewCellHandler

@property (nonatomic) BOOL shouldOpen;

- (id)initWithCurViewController:(id)a0;
- (id)genCellManager;
- (void)soundSwitchChanged:(id)a0;
- (void)openRingBackSwitch;

@end
