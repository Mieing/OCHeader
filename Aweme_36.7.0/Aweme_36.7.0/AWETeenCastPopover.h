@class NSString, UIView, AWEAwemeModel;

@interface AWETeenCastPopover : DUXPopover

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) UIView *targetView;

+ (BOOL)isShowing;

- (void)trackBubbleShowEvent;
- (BOOL)isFrequencyControlValid;
- (id)initWithTarget:(id)a0 clickBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)show;

@end
