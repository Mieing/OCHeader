@class AWEMessageReachComponentModel, AWEMessageReachParamContext;

@interface AWEMessageReachComponentContext : NSObject

@property (retain, nonatomic) AWEMessageReachParamContext *paramContext;
@property (retain, nonatomic) AWEMessageReachParamContext *lastParamContext;
@property (retain, nonatomic) AWEMessageReachComponentModel *needDowngradedComponentModel;
@property (retain, nonatomic) AWEMessageReachComponentModel *showingComponentModel;
@property (retain, nonatomic) AWEMessageReachComponentModel *replaceShowingComponentModel;
@property (nonatomic) double showTimeStamp;
@property (nonatomic) BOOL isEnterClearing;
@property (retain, nonatomic) AWEMessageReachComponentModel *downgradingComponentModel;
@property (retain, nonatomic) AWEMessageReachComponentModel *prepareShowComponentModel;
@property (copy, nonatomic) id /* block */ pendingShowCompleteBlock;

- (void)setUpShowingComponentModelAndUpdateShowTime:(id)a0;
- (void).cxx_destruct;

@end
