@class NSString, UIImage, UIView, NSLayoutConstraint, UILabel;

@interface BDPIndicatorView : UIView <BDPKeyboardResponderDelegate> {
    BOOL _mask;
    NSString *_text;
    double _duration;
    long long _style;
    NSString *_imageName;
    unsigned long long _maxLine;
    long long _cornerRadius;
    UIView *_myMaskView;
    UIView *_containerView;
    UIView *_iconContainer;
    UILabel *_label;
    UIImage *_image;
    id /* block */ _dismissHandler;
}

@property (retain, nonatomic) NSLayoutConstraint *centerYConstraint;
@property (nonatomic) BOOL isFromDeveloper;
@property (nonatomic) double timestampWhenShow;
@property (nonatomic) BOOL didDetectDuration;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dismissWithAnimated:(BOOL)a0;
+ (void)showWithModel:(id)a0;
+ (void)showWithTitle:(id)a0;
+ (void)showWithModel:(id)a0 fromParentView:(id)a1;
+ (void)showWithTitle:(id)a0 type:(long long)a1;
+ (void)showWithTitle:(id)a0 type:(long long)a1 duration:(double)a2;
+ (void)showWithModel:(id)a0 fromParentView:(id)a1 image:(id)a2 isFromDeveloper:(BOOL)a3;
+ (void)showWithModel:(id)a0 image:(id)a1;
+ (void)showWithModel:(id)a0 fromParentView:(id)a1 image:(id)a2;

- (void)showFromParentView:(id)a0;
- (void)onKeyboardWillShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (id)initWithModel:(id)a0 image:(id)a1;
- (id)initWithIndicatorStyle:(long long)a0 text:(id)a1 imageName:(id)a2 maxLine:(unsigned long long)a3 duration:(double)a4 mask:(BOOL)a5 image:(id)a6 cornerRedius:(double)a7 dismissHandler:(id /* block */)a8;
- (void)setupContaineViewSize;
- (void).cxx_destruct;
- (void)dismissAnimated:(BOOL)a0;
- (void)setupUI;

@end
