@class NSString, NSArray, NSNumber, AWEURLModel;

@interface AWECouponDetailModel : AWECouponModel

@property (copy, nonatomic) NSString *useNotification;
@property (retain, nonatomic) NSNumber *userID;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSString *serviceTEL;
@property (copy, nonatomic) NSArray *poiList;
@property (copy, nonatomic) NSString *detailURL;
@property (retain, nonatomic) AWEURLModel *QRCodeImageURL;
@property (copy, nonatomic) NSString *useCouponURL;
@property (copy, nonatomic) NSString *storeURL;
@property (copy, nonatomic) NSString *codeBarImageURL;
@property (nonatomic) unsigned long long playingType;
@property (nonatomic) BOOL ratingAvailable;
@property (nonatomic) long long objectType;
@property (copy, nonatomic) NSString *checkoutPOIID;
@property (copy, nonatomic) NSString *checkoutPOIName;
@property (nonatomic) unsigned long long usePageType;
@property (nonatomic) long long totalTimes;
@property (nonatomic) long long leftTimes;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
