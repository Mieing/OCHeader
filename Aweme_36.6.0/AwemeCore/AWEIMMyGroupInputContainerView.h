@class MASConstraint, NSMutableDictionary, UIView;

@interface AWEIMMyGroupInputContainerView : UIView

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSMutableDictionary *activeConstraint;
@property (retain, nonatomic) MASConstraint *heightConstraint;

- (void)updateKeyboardHeight:(double)a0;
- (void).cxx_destruct;
- (id)initWithContentView:(id)a0;

@end
