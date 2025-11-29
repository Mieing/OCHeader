@class RTVFeedShareReminderContentViewModel, UILabel, UIView, UITapGestureRecognizer;
@protocol RTVVoipResourceFetcherInterface, RxInjector;

@interface RTVFeedShareReminderContentView : UIView

@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (readonly, nonatomic) RTVFeedShareReminderContentViewModel *model;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (copy, nonatomic) id /* block */ tapBlock;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__handleTapGesture:(id)a0;
- (void)renderModel:(id)a0;
- (void)__refreshComponents;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
