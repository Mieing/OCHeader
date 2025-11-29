@class NSString;

@interface AWEACCGradientImpl : NSObject <ACCGradientProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)addTopGradientViewForViewController:(id)a0 View:(id)a1 FromColor:(id)a2 toColor:(id)a3 height:(double)a4;
- (id)addBottomGradientViewForViewController:(id)a0 View:(id)a1 FromColor:(id)a2 toColor:(id)a3 height:(double)a4;

@end
