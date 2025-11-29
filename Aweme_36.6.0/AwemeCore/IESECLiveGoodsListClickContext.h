@class NSString, NSDictionary, NSMutableSet, IESECLiveGoodsListParams;

@interface IESECLiveGoodsListClickContext : NSObject

@property (nonatomic) long long autoApplyCouponType;
@property (readonly, nonatomic) IESECLiveGoodsListParams *params;
@property (nonatomic) BOOL isInitial;
@property (nonatomic) BOOL shouldTrackInitialInfo;
@property (nonatomic) BOOL shouldTrackInitialInfoV2;
@property (nonatomic) BOOL shouldTrackInitialSmartProduct;
@property (nonatomic) BOOL monitorTracked;
@property (nonatomic) double listViewReallyShowTime;
@property (retain, nonatomic) NSDictionary *temporaryTrackParams;
@property (retain, nonatomic) NSMutableSet *trackedIds;
@property (nonatomic) BOOL shouldTrackNow;
@property (retain, nonatomic) NSMutableSet *trackedTabIDs;
@property (nonatomic) BOOL hasLocatedGoods;
@property (nonatomic) BOOL hasShowRelatedLabel;
@property (nonatomic) BOOL everTrackedScroll;
@property (nonatomic) BOOL hasScrolledToBottom;
@property (nonatomic) BOOL bottomLabelShowed;
@property (copy, nonatomic) NSString *showedHorizontalProductIdList;
@property (nonatomic) BOOL isEnterGoodsDetail;

+ (id)entranceForm;

- (id)couponInfo;
- (id)fetchParams;
- (void)clearRelatedInfo;
- (void)modifyRelatedInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
