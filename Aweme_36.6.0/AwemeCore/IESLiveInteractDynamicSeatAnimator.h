@class NSArray, NSDictionary, NSString, UIView;
@protocol IESLiveInteractSeatProvider;

@interface IESLiveInteractDynamicSeatAnimator : NSObject

@property (weak, nonatomic) UIView *view;
@property (copy, nonatomic) NSDictionary *info;
@property (copy, nonatomic) NSArray *groups;
@property (copy, nonatomic) NSString *itemId;
@property (weak, nonatomic) UIView<IESLiveInteractSeatProvider> *seat;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL disableAnimate;

+ (id)animatorWithInfo:(id)a0 view:(id)a1;

- (void)startAnimate;
- (void).cxx_destruct;

@end
