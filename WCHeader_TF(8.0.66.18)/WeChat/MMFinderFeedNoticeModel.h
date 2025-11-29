@class WCFinderLiveAudienceNoticeReporter, NSMutableDictionary, WCFinderInteractivePanelConfigParamsModel, WCFinderFeedContentVM, UIView, MMFinderLiveBuyTicketHandle, UIViewController;

@interface MMFinderFeedNoticeModel : NSObject

@property (weak, nonatomic) UIViewController *findViewController;
@property (weak, nonatomic) UIView *feedView;
@property (retain, nonatomic) NSMutableDictionary *jumpInfoPanelDict;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderInteractivePanelConfigParamsModel *paramsModel;
@property (retain, nonatomic) MMFinderLiveBuyTicketHandle *ticketHandle;
@property (retain, nonatomic) WCFinderLiveAudienceNoticeReporter *liveNoticeReporter;

- (id)getNotCreateTicketHandle;
- (void).cxx_destruct;

@end
