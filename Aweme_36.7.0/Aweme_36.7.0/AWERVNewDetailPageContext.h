@class AWEAwemeModel, NSString, AWERVNewDetailPlayVideoViewController, AWERVNewDetailPerformanceMonitor, NSDictionary, AWERelatedVideoQualityMonitor, UIViewController, AWERVNewDetailDataController;

@interface AWERVNewDetailPageContext : AWEPageContext

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) double playSpeed;
@property (weak, nonatomic) UIViewController *container;
@property (retain, nonatomic) AWEAwemeModel *entranceAwemeModel;
@property (copy, nonatomic) NSString *entranceAwemeId;
@property (retain, nonatomic) AWERVNewDetailPerformanceMonitor *loadRecorder;
@property (retain, nonatomic) AWERelatedVideoQualityMonitor *qualityMonitor;
@property (nonatomic) BOOL isEnteringAwemeDetail;
@property (nonatomic) BOOL isExitingAwemeDetail;
@property (nonatomic) long long currentClickIndex;
@property (retain, nonatomic) AWEAwemeModel *clickCellModel;
@property (weak, nonatomic) AWERVNewDetailPlayVideoViewController *currentClickVideoController;
@property (retain, nonatomic) AWERVNewDetailDataController *dataController;
@property (nonatomic) BOOL shouldUpdateInteractiveInfo;
@property (nonatomic) BOOL preventPauseWhenDisappear;
@property (nonatomic) BOOL noImmediatelyPlay;
@property (nonatomic) BOOL isExpandInfo;

- (BOOL)isPortraitVideo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
