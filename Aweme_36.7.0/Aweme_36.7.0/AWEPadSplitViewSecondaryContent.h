@class NSString, UIViewController, AWEPadSplitPageContext;
@protocol AWEPadSplitViewService, AWEPadSplitViewBizAdapter;

@interface AWEPadSplitViewSecondaryContent : UIViewController <AWEPadSplitViewSecondaryContentProtocol>

@property (copy, nonatomic) NSString *splitViewScene;
@property (retain, nonatomic) UIViewController *content;
@property (nonatomic) BOOL displayNavigationBar;
@property (nonatomic) BOOL isPadSplitting;
@property (weak, nonatomic) AWEPadSplitPageContext *splitViewContext;
@property (weak, nonatomic) id<AWEPadSplitViewService> splitService;
@property (retain, nonatomic) id<AWEPadSplitViewBizAdapter> splitViewAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
