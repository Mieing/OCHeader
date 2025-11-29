@class NSString;
@protocol WCTimeLineContactSelectViewControllerDelegate;

@interface WCTimeLineContactSelectViewController : MMUIViewController <ContactSelectViewDelegate> {
    id<WCTimeLineContactSelectViewControllerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;
- (void)initView;
- (void)initTitleArea;
- (void)onCancelBack:(id)a0;
- (void)onSelectContact:(id)a0;
- (BOOL)onFilterContactCandidate:(id)a0;
- (id)getSafeSearchViewController;
- (void).cxx_destruct;

@end
