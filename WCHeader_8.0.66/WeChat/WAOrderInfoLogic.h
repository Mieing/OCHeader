@class WAOrderInfoModel;

@interface WAOrderInfoLogic : MMObject <PBMessageObserverDelegate>

@property (copy, nonatomic) id /* block */ orderInfoRespAction;
@property (copy, nonatomic) id /* block */ dissmissOrderRedDotRespAction;
@property (readonly, nonatomic) WAOrderInfoModel *orderInfo;

- (void)requestOrderInfoWithCompleteAction:(id /* block */)a0;
- (void)requestReportOpenWxaOrderWithCompleteAction:(id /* block */)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
