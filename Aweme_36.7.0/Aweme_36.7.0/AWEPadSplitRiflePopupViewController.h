@class NSString, AWEPadSplitPageContext;
@protocol AWEPadSplitViewService, AWEPadSplitViewBizAdapter;

@interface AWEPadSplitRiflePopupViewController : UIViewController <AWEPadSplitViewSecondaryController>

@property (copy, nonatomic) id /* block */ closeBlock;
@property (nonatomic) BOOL isPadSplitting;
@property (readonly, copy, nonatomic) NSString *splitViewScene;
@property (weak, nonatomic) AWEPadSplitPageContext *splitViewContext;
@property (weak, nonatomic) id<AWEPadSplitViewService> splitService;
@property (retain, nonatomic) id<AWEPadSplitViewBizAdapter> splitViewAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLoad;

@end
