@class NSString, UIImageView, MMUIFastTapGestureRecognizer, UILongPressGestureRecognizer;
@protocol LongPressImageViewDelegate;

@interface MMUILongPressImageView : MMUIImageView <MMUIFastTapGestureRecognizerDelegate>

@property (retain, nonatomic) MMUIFastTapGestureRecognizer *singleTapGesture;
@property (retain, nonatomic) MMUIFastTapGestureRecognizer *doubleTapGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) UIImageView *wxHighlightedImageView;
@property (nonatomic) BOOL wxHighlightedImageDirtyMark;
@property (weak, nonatomic) id<LongPressImageViewDelegate> m_delegate;
@property (nonatomic) unsigned long long supportedActions;
@property (nonatomic) BOOL enableHighlighted;
@property (nonatomic) BOOL showsTouchWhenHighlighted;
@property (nonatomic, getter=isWxHighlighted) BOOL wxHighlighted;
@property (retain, nonatomic) NSString *contextString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImage:(id)a0;
- (id)init;
- (void)initGestures;
- (void)setImage:(id)a0;
- (void)handleSingleTap:(id)a0;
- (void)handleDoubleTap:(id)a0;
- (void)handleLongPress:(id)a0;
- (void)cancelAllGestures;
- (void)tapGestureRecognizerBegan:(id)a0 tapCount:(unsigned long long)a1;
- (void)tapGestureRecognizerFinished:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)getContextString;
- (void).cxx_destruct;

@end
