@class NSString, AWETextView, AWETextViewManager;

@interface ACCTextViewImpl : NSObject <ACCTextViewProtocol>

@property (retain, nonatomic) AWETextView *aweTextView;
@property (retain, nonatomic) AWETextViewManager *textViewManager;
@property (copy, nonatomic) id /* block */ exceptionRange;
@property (nonatomic) BOOL disablePerformActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)textView;

@end
