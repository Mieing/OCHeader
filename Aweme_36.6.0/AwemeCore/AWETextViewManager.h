@class NSString, AWETextView, AWETextLayoutManager;

@interface AWETextViewManager : NSObject <NSLayoutManagerDelegate>

@property (retain, nonatomic) AWETextLayoutManager *layoutManager;
@property (retain, nonatomic) AWETextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (BOOL)layoutManager:(id)a0 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)a1;

@end
