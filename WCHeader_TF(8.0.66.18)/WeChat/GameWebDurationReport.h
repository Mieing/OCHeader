@class NSString, NSMutableString, NSMutableDictionary, NSNumber, UIViewController;

@interface GameWebDurationReport : MMObject

@property (nonatomic) unsigned long long durationInterval;
@property (nonatomic) unsigned long long lastVisibleTime;
@property (nonatomic) BOOL gcReportIsVisible;
@property (nonatomic) BOOL gcReportIsViewDidAppear;
@property (nonatomic) BOOL hasEndReport;
@property (nonatomic) BOOL hasBeenVisible;
@property (retain, nonatomic) NSString *reportVcDesc;
@property (retain, nonatomic) NSMutableString *durationReportStr;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSMutableDictionary *externInfoDict;
@property (nonatomic) unsigned long long clientDurationGap;
@property (nonatomic) BOOL beLiteApp;
@property (nonatomic) BOOL visible;
@property (weak, nonatomic) UIViewController *reportVc;
@property (retain, nonatomic) NSNumber *ssIdNum;

+ (unsigned long long)getMonotonicTimeInMillseconds;

- (id)initWithReportVc:(id)a0 url:(id)a1 fromLite:(BOOL)a2;
- (id)initWithReportVc:(id)a0 url:(id)a1;
- (id)description;
- (void)onViewDidAppear;
- (void)onViewDidDisappear;
- (void)reportApplicationWillEnterForeground;
- (void)reportApplicationDidEnterBackground;
- (BOOL)checkShouldHandleBackgroundChange:(BOOL)a0;
- (BOOL)checkShouldBeInStack;
- (BOOL)isVc:(id)a0 childViewControllOfVc:(id)a1;
- (void)markVisibleBegin:(id)a0;
- (void)markVisibleEnd:(id)a0;
- (void)markVisibleEnd:(id)a0 fromDealloc:(BOOL)a1;
- (void)reportOnVisibleChange:(BOOL)a0 reason:(id)a1;
- (void)viewDidBePoped;
- (void)onDealloc;
- (void)handleExit:(BOOL)a0;
- (void)addAdditionReportDurationInfo:(id)a0;
- (void)report27743WithUrl:(id)a0 duration:(unsigned long long)a1 externInfoDict:(id)a2;
- (BOOL)checkFinderEntryLiteApp:(id)a0;
- (void)report27743Data:(id)a0 duration:(unsigned long long)a1 externInfoDict:(id)a2;
- (void)dealloc;
- (void).cxx_destruct;

@end
