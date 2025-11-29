@class NSString, FinderShopCouponInfo, NSHashTable, NSArray;

@interface MMFinderLiveCouponItem : NSObject <WCFinderLiveLogReportValueProvider, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isValidForNotice;
@property (readonly, nonatomic) MMFinderLiveCouponItem *validItemForNotice;
@property (retain, nonatomic) FinderShopCouponInfo *couponInfo;
@property (nonatomic) BOOL isDuringReceiving;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) FinderShopCouponInfo *pb;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSString *stockId;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *discount;
@property (retain, nonatomic) NSArray *valueWording;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long remainCount;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSString *dueDate;
@property (retain, nonatomic) NSString *useCondition;
@property (readonly, nonatomic) NSString *audienceButtonWording;
@property (nonatomic) int sourceType;
@property (nonatomic) BOOL anchorSending;
@property (readonly, nonatomic) BOOL audienceReceived;
@property (readonly, nonatomic) BOOL isInstantDiscountActivity;

- (id)finderLiveLogReportValueForKey:(id)a0;
- (id)initWithCouponInfo:(id)a0;
- (id)genDiscount;
- (id)genValueWording;
- (void)onFinderCouponReceivedEvent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;

@end
