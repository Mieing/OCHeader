@class UIView;

@interface GCScrollViewObj : NSObject

@property (retain, nonatomic) UIView *scrollView;
@property (nonatomic) double marginBottomInputView;
@property (nonatomic) double initialBottom;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) id /* block */ getBottomCallback;

- (void).cxx_destruct;

@end
