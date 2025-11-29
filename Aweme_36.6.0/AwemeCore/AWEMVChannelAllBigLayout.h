@class NSString, UIViewController, AWEDCFeedPageContext;
@protocol AWEDCFeedListViewControllerProtocol;

@interface AWEMVChannelAllBigLayout : NSObject <AWEMVChannelBuildLayoutProtocol>

@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (retain, nonatomic) UIViewController<AWEDCFeedListViewControllerProtocol> *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
