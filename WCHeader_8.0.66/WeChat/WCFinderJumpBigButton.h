@class NSString;

@interface WCFinderJumpBigButton : MMUIButton <WCFinderJumpInfoViewProtocol>

@property (nonatomic) BOOL needHighlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadWithFollowState:(BOOL)a0;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)hiddenBigButton;

@end
