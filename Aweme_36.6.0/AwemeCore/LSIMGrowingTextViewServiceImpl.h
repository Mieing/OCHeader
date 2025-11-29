@class NSString, LSIMInputTextViewWrapper;

@interface LSIMGrowingTextViewServiceImpl : NSObject <LSIMGrowingTextViewService>

@property (retain, nonatomic) LSIMInputTextViewWrapper *inputTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupTextViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createInputTextViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
