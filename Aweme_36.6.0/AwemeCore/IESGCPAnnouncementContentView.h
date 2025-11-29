@class NSString, UITextView;
@protocol IESGCPAnnouncementContentViewDelegate;

@interface IESGCPAnnouncementContentView : UIView <UITextViewDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (weak, nonatomic) id<IESGCPAnnouncementContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapedLeftBarButton;
- (void)configHTMLText:(id)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
