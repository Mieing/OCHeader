@class CJPayWithDrawResultHeaderView, NSString, NSDictionary, CJPayBannerResponse, CJPayBDOrderResultResponse, CJPayWithDrawResultArrivingView;

@interface CJPayWithDrawResultViewModel : NSObject

@property (retain, nonatomic) CJPayBDOrderResultResponse *response;
@property (retain, nonatomic) CJPayBannerResponse *bannerResponse;
@property (readonly, copy, nonatomic) NSString *arrivingMethod;
@property (readonly, copy, nonatomic) NSString *timeText;
@property (readonly, copy, nonatomic) NSString *dateFormaterString;
@property (nonatomic) int orderNum;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *merchantID;
@property (retain, nonatomic) CJPayWithDrawResultHeaderView *headerView;
@property (retain, nonatomic) CJPayWithDrawResultArrivingView *bootomView;
@property (copy, nonatomic) NSDictionary *withdrawResultPageDescDict;
@property (copy, nonatomic) NSDictionary *preOrderTrackInfo;

- (void)p_trackerWithEventName:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (void)updateWithResponse:(id)a0;

@end
