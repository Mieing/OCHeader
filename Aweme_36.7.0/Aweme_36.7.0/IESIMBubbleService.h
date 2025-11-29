@class NSString;

@interface IESIMBubbleService : HTSService <IESIMBubbleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showBubble:(id)a0 forView:(id)a1 anchorAdjustment:(struct CGPoint { double x0; double x1; })a2 inDirection:(unsigned long long)a3 isDarkBackGround:(BOOL)a4 completion:(id /* block */)a5;

@end
