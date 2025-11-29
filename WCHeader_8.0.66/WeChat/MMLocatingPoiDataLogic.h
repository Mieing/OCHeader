@class WCFinderPOIRelatedStreamViewModel, NSString, WCFinderPOIParamsModel, MMLocationPoiDetailModel;

@interface MMLocatingPoiDataLogic : NSObject <WCFinderPOIRelatedStreamViewModelDelegate> {
    id /* block */ _successBlock;
    id /* block */ _failBlock;
}

@property (retain, nonatomic) WCFinderPOIParamsModel *paramsModel;
@property (readonly, nonatomic) double lastStreamRequestTime;
@property (nonatomic) int commentScene;
@property (readonly, nonatomic) WCFinderPOIRelatedStreamViewModel *streamModel;
@property (readonly, nonatomic) MMLocationPoiDetailModel *detailModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestPoiDetail:(id)a0 allowCache:(BOOL)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (void)requestPoiBasicInfo:(id)a0 fromTid:(id)a1 fromCommentScene:(int)a2 groupBuyBypassData:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)requestPoiServiceInfo:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (void)requestPoiStream:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (void)onFinderPoiHeaderViewNeedRefresh;
- (void)onFinderPoiTabListError;
- (int)feedViewControllerScene;
- (void).cxx_destruct;

@end
