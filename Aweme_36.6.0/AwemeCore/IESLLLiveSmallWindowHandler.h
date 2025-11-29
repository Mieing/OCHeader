@class UIViewController;
@protocol IESLLLiveSchemaFloatOnTop;

@interface IESLLLiveSmallWindowHandler : NSObject

@property (retain, nonatomic) id<IESLLLiveSchemaFloatOnTop> floatOnTopManager;
@property (weak, nonatomic) UIViewController *fromVC;
@property (nonatomic) BOOL isAttach;

+ (id)sharedInstance;

- (void)judgeRemoveLiveSmallWindow;
- (void)configureLiveSmallWindowWithViewController:(id)a0 fromViewController:(id)a1 tag:(id)a2;
- (void)publishEventWithWindowClose;
- (void)configureLiveSmallWindowWithViewController:(id)a0 fromViewController:(id)a1;
- (BOOL)judgeShowLiveSmallWindow;
- (BOOL)judgeHiddenLiveSmallWindow;
- (void).cxx_destruct;
- (id)init;

@end
