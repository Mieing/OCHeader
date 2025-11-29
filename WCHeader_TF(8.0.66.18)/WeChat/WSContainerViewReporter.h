@class NSNumber, NSString, NSMutableDictionary;
@protocol IWSContainerReportDelegate;

@interface WSContainerViewReporter : NSObject <WCSessionFlowMonitorExt, WSContainerView>

@property (retain, nonatomic) NSNumber *categoryId;
@property (nonatomic) unsigned long long pageId;
@property (nonatomic) unsigned long long enterTimeMs;
@property (nonatomic) BOOL isInCurrTab;
@property (retain, nonatomic) NSString *inTabReddotInfo;
@property (nonatomic) unsigned int haveTipsBubble;
@property (retain, nonatomic) NSNumber *fromCategoryId;
@property (retain, nonatomic) NSNumber *toCategoryId;
@property (retain, nonatomic) NSMutableDictionary *eventIdDict;
@property (weak, nonatomic) id<IWSContainerReportDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setCategoryId:(id)a0 andPageId:(unsigned long long)a1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)initViewIfNeed;
- (void)setReportDelegate:(id)a0;
- (id)onPreReport:(id)a0;
- (void)initDefaultEventIdDict;
- (void)resetEventIdDict:(id)a0;
- (id)checkToReturnInParams;
- (id)checkToReturnOutParams;
- (void)onEnterWSWebView:(BOOL)a0;
- (void)onQuitWSWebView:(BOOL)a0;
- (void)onSwitchToThisView:(id)a0;
- (void)onSwitchToOtherView:(id)a0;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (unsigned long long)genStayTimeMs;
- (void)noteInTabReddotInfo:(id)a0;
- (void)noteHaveTipsBubble;
- (void).cxx_destruct;

@end
