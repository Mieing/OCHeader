@class IESLiveUserEnterMonitor, HTSEventContext, HTSLiveUserEnterConfiguration, IESLiveUserEnterQueue, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveUserEnterNodeProcessor : NSObject

@property (retain, nonatomic) IESLiveUserEnterQueue *workQueue;
@property (nonatomic) BOOL hasReportedLimitedNode;
@property (retain, nonatomic) HTSLiveUserEnterConfiguration *configuration;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESLiveUserEnterMonitor *monitor;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (BOOL)isInValidTime:(id)a0;
- (id)createNodeWithMessage:(id)a0;
- (BOOL)enableUserEnterWithMessage:(id)a0;
- (BOOL)enablePopNode:(id)a0;
- (void)nodeDidConsumed:(id)a0;
- (BOOL)replaceNodeIfNeed:(id)a0;
- (void)clearComboNodeDataWithSeq:(id)a0;
- (id)checkNextComboNode:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrameWithNode:(id)a0;
- (void)createNodeViewWithNode:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)nodeViewDidClickedWithNode:(id)a0;
- (void)nodeViewDidAddedToContainerWithNode:(id)a0;
- (void)nodeViewDismissedWithNode:(id)a0;
- (void)checkNodeCounts;
- (void)trackHighLevelMessageClickWithNode:(id)a0;
- (void)bindWorkQueue:(id)a0;
- (void)processUserEnterMessage:(id)a0;
- (void)produceUserEnterViewWithNode:(id)a0 completion:(id /* block */)a1;
- (BOOL)conditionToReplaceNode:(id)a0 newNode:(id)a1;
- (void).cxx_destruct;

@end
