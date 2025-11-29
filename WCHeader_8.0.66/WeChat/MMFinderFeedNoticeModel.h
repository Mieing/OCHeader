@class MMFinderLiveReserveNoticeLogic, NSMutableDictionary, WCFinderInteractivePanelConfigParamsModel, WCFinderFeedContentVM, UIView, WCFinderLiveAudienceNoticeReporter, UIViewController;

@interface MMFinderFeedNoticeModel : NSObject

@property (weak, nonatomic) UIViewController *findViewController;
@property (weak, nonatomic) UIView *feedView;
@property (retain, nonatomic) NSMutableDictionary *jumpInfoPanelDict;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderInteractivePanelConfigParamsModel *paramsModel;
@property (retain, nonatomic) MMFinderLiveReserveNoticeLogic *reserveNoticeLogic;
@property (retain, nonatomic) WCFinderLiveAudienceNoticeReporter *liveNoticeReporter;

- (id)getNotCreateTicketHandle;
- (void).cxx_destruct;

@end
