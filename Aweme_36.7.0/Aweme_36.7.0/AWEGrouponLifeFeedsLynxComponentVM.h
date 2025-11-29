@class NSNumber, NSString, AWEGrouponLifeFeedsLynxComponentView, NSMutableArray, AWEGrouponLifeFeedsLynxItem;
@protocol AnnieXCardModelProtocol;

@interface AWEGrouponLifeFeedsLynxComponentVM : AWEGrouponLifeFeedsBaseComponentVM <AWEGrouponLifeFeedsLynxComponentVMProtocol>

@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (readonly, copy, nonatomic) AWEGrouponLifeFeedsLynxComponentView *lynxComponentView;
@property (retain, nonatomic) NSMutableArray *paddingActionList;
@property (readonly, nonatomic) AWEGrouponLifeFeedsLynxItem *lynxViewItem;
@property (nonatomic) long long showTimes;
@property (nonatomic) long long showTwoThirdsTimes;
@property (nonatomic) long long showCompleteTimes;
@property (nonatomic) long long startHideTimes;
@property (nonatomic) long long hideTwoThirdsTimes;
@property (nonatomic) long long hideCompleteTimes;
@property (nonatomic) double presetHeight;
@property (copy, nonatomic) NSNumber *lynxStartShowTwoThirdsTime;
@property (nonatomic) BOOL didEndLoad;
@property (readonly, nonatomic) BOOL isLynxReady;
@property (nonatomic) BOOL canLynxOnScreen;
@property (copy, nonatomic) NSNumber *contentHeightNumber;
@property (copy, nonatomic) NSNumber *lynxHeightBeforeBindData;
@property (copy, nonatomic) NSNumber *lynxHeightAfterUpdate;
@property (readonly, nonatomic) NSNumber *lynxHeightTheMostLikely;
@property (nonatomic) BOOL forcedUpdate;
@property (copy, nonatomic) NSNumber *reuseType;
@property (nonatomic) long long numberOfRenderings;
@property (nonatomic) BOOL needWaitSendPlayEvent;
@property (readonly, copy, nonatomic) NSString *sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)dispatchAction:(id)a0;
- (void)setRecommendData:(id)a0;
- (void)pageDidScroll:(id)a0 scrollView:(id)a1;
- (id)componentReuseIdentifier;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0 presetHeight:(double)a1;
- (void)bindStateAndAction;
- (void)componentStartShow:(unsigned long long)a0;
- (void)componentStartShowTwoThirds:(unsigned long long)a0;
- (void)componentDidCompleteShow:(unsigned long long)a0;
- (void)componentStartEndShow:(unsigned long long)a0;
- (void)componentStartEndShowTwoThirds:(unsigned long long)a0;
- (void)componentDidEndShow:(unsigned long long)a0;
- (void)updatePriceInfo:(id)a0;
- (void)updateIncrementalNodeData:(id)a0;
- (void)resetRecommendData;
- (void)tryPostPaddingActionList;
- (void)postCardLifeCycleAction:(id)a0 params:(id)a1;
- (void)postCardLifeCyclePaddingActionList;
- (void)receiveAction:(id)a0 params:(id)a1;
- (void)dispatchActionCallback:(id)a0 result:(id)a1;
- (id)appendQueryOntoLynxUrl:(id)a0;
- (id)extraDataForLynxCardModel;
- (id)recursiveMergeDictWithIncrementalDict:(id)a0 originDict:(id)a1;
- (id)createCardModel:(id)a0;
- (void)setupContentHeight:(double)a0;
- (void)tryTrackPartialShowTime:(unsigned long long)a0;
- (void)updateLynxCardModel;
- (id)fetchPredecodeTemplateBundle;
- (void)setupTapGestureEnable;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (id)originURL;

@end
