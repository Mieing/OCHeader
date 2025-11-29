@class NSString;

@interface IESLivePuzzleShowLiveFloatWindowServiceIMP : NSObject <PuzzleShowLiveFloatWindowService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showLiveFloatWindowWithContext:(id)a0;
- (void)hideLiveFloatWindowWithContext:(id)a0;
- (void)setLiveFloatWindowClickBlock:(id /* block */)a0 context:(id)a1;

@end
