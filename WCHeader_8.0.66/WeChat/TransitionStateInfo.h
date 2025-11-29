@class NSMutableDictionary;

@interface TransitionStateInfo : NSObject

@property (nonatomic) long long transitionState;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (nonatomic) BOOL isCollapseInvoking;
@property (nonatomic) BOOL isWaitingRotatePortraitToCollapse;
@property (nonatomic) BOOL isCollapseAnimated;
@property (copy, nonatomic) id /* block */ collapseCompletionCallback;
@property (nonatomic) BOOL isExtendFromCollapseAnimated;
@property (nonatomic) long long extendPrepareActionMaximize;
@property (nonatomic) long long extendPrepareActionRotate;
@property (copy, nonatomic) id /* block */ extendFromCollapseCompletionCallback;
@property (nonatomic) BOOL isDisposeMinimizeWindowAnimated;
@property (nonatomic) long long disposeMinimizeWindowPrepareActionMaximize;

- (id)initWithTransitionState:(long long)a0;
- (BOOL)isCurrInCollapseTransition;
- (BOOL)isCurrExtendingFromCollapse;
- (BOOL)isCurrDisposingMinimizeWindow;
- (void).cxx_destruct;

@end
