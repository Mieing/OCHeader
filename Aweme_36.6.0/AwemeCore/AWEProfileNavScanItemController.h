@class AWEProfileNavigationButton, NSString;
@protocol AWEProfileNavigationContainerDelegate;

@interface AWEProfileNavScanItemController : NSObject <AWEProfileNavigationItemControllerProtocol>

@property (retain, nonatomic) AWEProfileNavigationButton *scanButton;
@property (weak, nonatomic) id<AWEProfileNavigationContainerDelegate> delegate;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (id)profileContext;
- (id)navigationItemView;
- (void)scanButtonClicked:(id)a0;
- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;
- (void)viewWillAppear;

@end
