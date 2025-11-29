@protocol VoIPInvitationWindowDelegate;

@interface VoIPInvitationWindow : MMWindow

@property (weak, nonatomic) id<VoIPInvitationWindowDelegate> delegate;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
