@class NSString, NSAttributedString, UIView;

@interface DUXInAppNotificationConfig : NSObject

@property (nonatomic) BOOL shouldAutoDismiss;
@property (nonatomic) unsigned long long senderViewType;
@property (retain, nonatomic) UIView *senderView;
@property (retain, nonatomic) UIView *senderSubView;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *content;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *actionText;
@property (retain, nonatomic) UIView *actionView;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })senderViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })interactiveComponentFrame;
- (struct CGSize { double x0; double x1; })maxActionViewSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })primaryTextLabelFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })secondaryTextLabelFrame;
- (void).cxx_destruct;
- (double)maxLabelWidth;

@end
