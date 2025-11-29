@class NSArray, NSString;

@interface WCFinderProfileMemberShipCache : NSObject <PBCoding>

@property (retain, nonatomic) NSArray *videoTids;
@property (nonatomic) long long price;
@property (nonatomic) long long videoNum;
@property (retain, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *wecoinProductId;
@property (nonatomic) long long autoPrice;
@property (nonatomic) BOOL autoRenewSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_videoTids;
+ (void)PBArrayAdd_price;
+ (void)PBArrayAdd_videoNum;
+ (void)PBArrayAdd_ticket;
+ (void)PBArrayAdd_wecoinProductId;
+ (void)PBArrayAdd_autoPrice;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
