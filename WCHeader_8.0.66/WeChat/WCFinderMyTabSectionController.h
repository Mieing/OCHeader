@class NSString, NSMutableArray, UINavigationController;
@protocol WCFinderMyTabSectionControllerDelegate;

@interface WCFinderMyTabSectionController : NSObject

@property (retain, nonatomic) NSMutableArray *didBePopCallbackList;
@property (nonatomic) BOOL display;
@property (retain, nonatomic) NSString *displayTitle;
@property (weak, nonatomic) id<WCFinderMyTabSectionControllerDelegate> delegate;
@property (readonly, nonatomic) UINavigationController *navigationController;

+ (Class)paramsClass;
+ (id)generateReportInfoFromCombines:(id)a0;
+ (long long)mapAccountType:(BOOL)a0 brandState:(long long)a1;

- (id)init;
- (id)initWithParams:(id)a0;
- (id)createDisplayCard;
- (void)onViewWillAppear;
- (void)onViewDidAppear;
- (void)onViewWillDisappear;
- (void)onViewDidDisappear;
- (void)onViewWillBePushOrPresent;
- (void)onViewDidBePushOrPresent;
- (void)onViewWillBePopOrDismiss;
- (void)onViewDidBePopOrDismiss;
- (void)onViewWillPushOrPresent;
- (void)onViewDidPushOrPresent;
- (void)onViewWillPopOrDismiss;
- (void)onViewDidPopOrDismiss;
- (void)addPageDidBePopCallback:(id /* block */)a0;
- (void)setCardNeedsLayout;
- (void)updateReportInfo:(id)a0;
- (id)combineReportInfo;
- (void).cxx_destruct;

@end
