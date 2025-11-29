@class NSArray, NSString, FinderHalfScreenFlutterAPI;
@protocol WCFinderFlutterHalfScreenPluginDelegate;

@interface WCFinderFlutterHalfScreenPlugin : NSObject <MMFlutterPlugin, FinderHalfScreenNativeAPI>

@property (weak, nonatomic) id<WCFinderFlutterHalfScreenPluginDelegate> delegate;
@property (retain, nonatomic) FinderHalfScreenFlutterAPI *flutterAPI;
@property (nonatomic) BOOL preventDrag;
@property (copy, nonatomic) NSArray *preventDragAreas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)dragGesShouldBeginWithTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)cancelHalfScreenAnimated:(BOOL)a0 error:(id *)a1;
- (void)updateHalfScreenContentHeightHeight:(double)a0 error:(id *)a1;
- (void)updateDragPreventStatePrevent:(BOOL)a0 error:(id *)a1;
- (void)updatePreventDragAreaAreas:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
