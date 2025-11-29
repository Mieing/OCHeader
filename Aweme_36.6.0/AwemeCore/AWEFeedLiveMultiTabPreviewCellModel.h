@class AWELiveTabDataController, NSString, AWEFeedLiveMultiTabPageTrace, NSDictionary, NSMutableArray, UIViewController;
@protocol AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol;

@interface AWEFeedLiveMultiTabPreviewCellModel : NSObject

@property (retain, nonatomic) AWEFeedLiveMultiTabPageTrace *pageTrace;
@property (nonatomic) BOOL hasConfigFooter;
@property (retain, nonatomic) NSMutableArray *aweModelArray;
@property (retain, nonatomic) UIViewController<AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol> *feedTableViewController;
@property (retain, nonatomic) NSMutableArray *allFeedItems;
@property (retain, nonatomic) AWELiveTabDataController *preStreamDataController;
@property (readonly, nonatomic) NSString *enterFromMerge;
@property (readonly, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSDictionary *landingParams;
@property (nonatomic) BOOL needRefreshData;
@property (nonatomic) long long tabID;
@property (nonatomic) long long index;

- (void)didSetAttachingDIContext;
- (id)initWithEnterFrom:(id)a0 enterMethod:(id)a1 params:(id)a2;
- (void)resetCellModelWithFeedLiveData:(id)a0;
- (void)configTableViewFooter:(BOOL)a0;
- (BOOL)hitEntranceGuide2LiveTab;
- (void).cxx_destruct;

@end
