@class AWEPOIDetailBdxNotificationUtil, DitoGeneralContainerPageContext, NSString, UIViewController;
@protocol AWEPOIDetailListUgcUtilProtocol, AWEPOIDetailListAwemeUtilProtocol, AWEPOIDetailListCoiUtilProtocol, AWEPOIDetailListTrackUtilProtocol, AWEPOIUGCRateContextProtocol;

@interface AWEPOIDetailListUtil : NSObject <AWEPOIDetailListUtilProtocol>

@property (retain, nonatomic) AWEPOIDetailBdxNotificationUtil *bdxNotificationHelper;
@property (retain, nonatomic) id<AWEPOIDetailListTrackUtilProtocol> trackUtil;
@property (retain, nonatomic) id<AWEPOIDetailListAwemeUtilProtocol> awemeUtil;
@property (retain, nonatomic) id<AWEPOIDetailListCoiUtilProtocol> coiUtil;
@property (retain, nonatomic) id<AWEPOIDetailListUgcUtilProtocol> ugcUtil;
@property (weak, nonatomic) UIViewController *detailViewController;
@property (weak, nonatomic) DitoGeneralContainerPageContext<AWEPOIUGCRateContextProtocol> *context;
@property (nonatomic) BOOL isFromIsolated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindStateAndAction;
- (void).cxx_destruct;

@end
