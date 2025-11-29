@interface IESLiveLinkRTCInteractViewLayouter : NSObject

+ (id)viewListFromSessions:(id)a0 maxCount:(unsigned long long)a1 ignorSession:(id)a2;
+ (void)layoutSmallViews:(id)a0 inContainerView:(id)a1;
+ (void)layoutSessions:(id)a0 hostSession:(id)a1 inContainer:(id)a2 animated:(BOOL)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })smallViewDefaultFrameInContainer:(id)a0;
+ (id)responseSessionOfGesture:(id)a0 inSessions:(id)a1 inContainerView:(id)a2;
+ (void)updateLayoutOfPublisher:(id)a0 withSessions:(id)a1 owner:(id)a2;
+ (void)updatePKLayoutOfPublisher:(id)a0 withSessions:(id)a1 owner:(id)a2 currentUser:(id)a3;

@end
