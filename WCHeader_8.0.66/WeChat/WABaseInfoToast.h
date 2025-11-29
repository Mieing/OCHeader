@class MMTimer, UIView;
@protocol WABaseInfoToastDelegate;

@interface WABaseInfoToast : MMUIView {
    BOOL m_isMoving;
    MMTimer *m_autoDismissTimer;
}

@property (weak, nonatomic) UIView *parentView;
@property (weak, nonatomic) id<WABaseInfoToastDelegate> delegate;
@property (nonatomic) BOOL isNeedAutoDismiss;
@property (nonatomic) long long showTimeStamp;

- (void)dealloc;
- (void)layoutSubviews;
- (void)showInView:(id)a0;
- (void)autoDismiss;
- (void)dismissWithAnimation:(BOOL)a0;
- (void).cxx_destruct;

@end
