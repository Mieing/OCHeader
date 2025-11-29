@class UIPanGestureRecognizer, UIView;

@interface AWEIMEmojiPanelMessageChangeContext : NSObject

@property (weak, nonatomic) UIView *sourceView;
@property (weak, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) BOOL isCancel;
@property (nonatomic) unsigned long long sourceType;

- (void).cxx_destruct;

@end
