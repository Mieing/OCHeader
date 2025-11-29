@class HTSEventForwardingView;

@interface IESLivePartyKTVStageContainerView : HTSEventForwardingView

@property (retain, nonatomic) HTSEventForwardingView *backgroundContainer;
@property (retain, nonatomic) HTSEventForwardingView *guestListContainer;
@property (retain, nonatomic) HTSEventForwardingView *residentGuestListContainer;
@property (retain, nonatomic) HTSEventForwardingView *contentContainer;
@property (retain, nonatomic) HTSEventForwardingView *songListContainer;
@property (retain, nonatomic) HTSEventForwardingView *playContainer;

+ (double)guestHeight;
+ (double)seatTop;
+ (double)seatBottom;
+ (double)controlHeight;
+ (double)contentHeight;
+ (double)contentTop;
+ (double)containerHeight;

- (void)setupSubContainers;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
