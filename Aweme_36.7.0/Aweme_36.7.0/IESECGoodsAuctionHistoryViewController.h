@class IESECGoodsAuctionHistoryView, NSString, IESECGoodsDetailTracker;
@protocol IESECGoodsDetailContainerProtocol;

@interface IESECGoodsAuctionHistoryViewController : UIViewController <IESECGoodsAuctionHistoryPanelDelegate, IESECGoodsDetailPopoverContentProtocol>

@property (retain, nonatomic) IESECGoodsAuctionHistoryView *content;
@property (weak, nonatomic) id<IESECGoodsDetailContainerProtocol> container;
@property (retain, nonatomic) IESECGoodsDetailTracker *tracker;
@property (copy, nonatomic) NSString *auctionID;
@property (copy, nonatomic) NSString *metaParamsStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)embedInContainer:(id)a0;
- (double)popoverContentHeight;
- (void)dismissCurrentVC;
- (id)initWithAuctionID:(id)a0 metaParams:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
