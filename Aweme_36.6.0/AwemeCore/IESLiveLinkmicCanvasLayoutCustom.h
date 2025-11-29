@class NSString;

@interface IESLiveLinkmicCanvasLayoutCustom : NSObject <IESLiveLinkmicCanvasLayoutProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerRect;
- (void)buildLayout;
- (id)separatorLayoutFrames;
- (id)sessionLayoutFrames;
- (id)sessionLayoutInset;
- (BOOL)isMainSlotWithIndex:(long long)a0;
- (id)streamLayoutProvider;
- (BOOL)isMainSlotEnable;

@end
