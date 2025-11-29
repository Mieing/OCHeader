@class NSArray, UIView;

@interface AWECommentActionContainer : UIView {
    UIView *_bottomLine;
}

@property (copy, nonatomic) NSArray *buttons;

- (void)setBottomLineHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (id)buttonWithType:(long long)a0;

@end
