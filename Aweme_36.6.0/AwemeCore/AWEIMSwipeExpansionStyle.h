@class NSArray, AWEIMSwipeCompletionAnimation, AWEIMSwipeTarget;

@interface AWEIMSwipeExpansionStyle : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) AWEIMSwipeTarget *target;
@property (copy, nonatomic) NSArray *additionalTriggers;
@property (nonatomic) BOOL elasticOverscroll;
@property (retain, nonatomic) AWEIMSwipeCompletionAnimation *completionAnimation;
@property (readonly, nonatomic) double minimumTargetOverscroll;
@property (readonly, nonatomic) double targetOverscrollElasticity;
@property (readonly, nonatomic) double minimumExpansionTranslation;

+ (id)destructiveReconfirmationWithBaseStyle:(id)a0;
+ (id)destructiveWithAutomaticallyDelete:(BOOL)a0 timing:(long long)a1;
+ (id)destructiveAfterFill;
+ (id)selection;
+ (id)destructive;
+ (id)fill;

- (BOOL)shouldExpandWithSwipeable:(id)a0 gesture:(id)a1 inSuperview:(id)a2 withinFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (double)targetOffsetForView:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
