@class NSString, UIView;

@interface AnnieXEngineElement : LynxUI

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIView *engineView;
@property (copy, nonatomic) NSString *anniexContainerId;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__631;

- (void)layoutDidFinished;
- (void)createEngineViewIfNeeded;
- (void)setAnnieXContainerId:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
