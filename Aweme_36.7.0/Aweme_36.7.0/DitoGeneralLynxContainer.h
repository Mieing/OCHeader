@class DitoPageContext, NSString, UIScrollView, NSNumber;

@interface DitoGeneralLynxContainer : AWEPOICubeView <DitoLynxContainerProtocol>

@property (weak, nonatomic) UIScrollView *nestedScrollView;
@property (weak, nonatomic) DitoPageContext *ditoPageContext;
@property (copy, nonatomic) NSString *ditoNodeTag;
@property (copy, nonatomic) NSString *containerID;
@property (readonly, nonatomic) NSNumber *geckoID;
@property (readonly, nonatomic) BOOL isLoadSuccess;
@property (nonatomic) BOOL hasReceivedSizeChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (id)lynxInitialData;
- (id)nativeModuleClasses;
- (void)updateLynxWithBizData:(id)a0;
- (id)nestedScrollViewWithViewID:(id)a0;
- (id)bfsSearchLynxListView;
- (void).cxx_destruct;

@end
