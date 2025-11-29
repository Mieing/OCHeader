@class NSString, AWEAwemeModel;

@interface AWEAwemeAllSearchSceneDetailController : AWEAwemeNewDetailBaseController

@property (retain, nonatomic) AWEAwemeModel *originModel;
@property (retain, nonatomic) NSString *innerSearchId;
@property (nonatomic) BOOL useSearchResultData;
@property (nonatomic) long long searchResultDataNum;
@property (nonatomic) long long docDepth;
@property (nonatomic) long long initialIndex;
@property (nonatomic) double firstDocStartStayTime;
@property (nonatomic) double firstDocStayTime;
@property (nonatomic) double startStayTime;
@property (nonatomic) double stayTime;

- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (id)getTrackParams;
- (id)getAwemeWithIndex:(long long)a0;
- (void)trackSearchInnerBack;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;

@end
