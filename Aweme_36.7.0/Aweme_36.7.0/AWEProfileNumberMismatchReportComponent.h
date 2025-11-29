@class NSString;

@interface AWEProfileNumberMismatchReportComponent : AWEProfileBaseComponent <AWEProfileNumberMismatchReportProtocol>

@property (nonatomic) long long previousIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackEventNameDict;

- (void)trackNumberMismatchWithTabModel:(id)a0 vc:(id)a1;
- (void)trackMismatchIfNeededWithTabIndex:(long long)a0;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1;
- (BOOL)isCurrentUser;
- (void)onInit;
- (void)viewWillDisappear;

@end
