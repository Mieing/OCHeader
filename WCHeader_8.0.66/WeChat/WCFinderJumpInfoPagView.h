@class NSString, WCFinderJumpInfo, WCFinderNetPagView;

@interface WCFinderJumpInfoPagView : UIView <WCFinderNetPagViewDelegate, WCFinderJumpInfoViewProtocol>

@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;
@property (nonatomic) int showPosition;
@property (retain, nonatomic) WCFinderNetPagView *pagView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)onFinderPagViewDidLoad:(BOOL)a0 path:(id)a1;
- (void).cxx_destruct;

@end
