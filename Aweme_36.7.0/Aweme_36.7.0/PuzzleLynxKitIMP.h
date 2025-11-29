@class NSString;

@interface PuzzleLynxKitIMP : NSObject <PuzzleLynxKit>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;

- (id)buildLynxViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 URL:(id)a1 context:(id)a2;

@end
