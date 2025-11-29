@class NSString;

@interface WCFinderPagHandler : NSObject <PAGViewListener>

@property (copy, nonatomic) id /* block */ animationStartBlock;
@property (copy, nonatomic) id /* block */ animationEndBlock;
@property (copy, nonatomic) id /* block */ animationCancelBlock;
@property (copy, nonatomic) id /* block */ animationRepeatBlock;
@property (copy, nonatomic) id /* block */ animationUpdateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPagView:(id)a0;
- (void)onAnimationStart:(id)a0;
- (void)onAnimationEnd:(id)a0;
- (void)onAnimationCancel:(id)a0;
- (void)onAnimationRepeat:(id)a0;
- (void)onAnimationUpdate:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
