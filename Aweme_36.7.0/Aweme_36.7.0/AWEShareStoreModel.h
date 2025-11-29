@class NSString, NSDictionary, AWEShopShareCardInfoModel, NSNumber, AWEURLModel;

@interface AWEShareStoreModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) NSString *secShopId;
@property (copy, nonatomic) NSString *shopName;
@property (retain, nonatomic) AWEURLModel *avatarMedium;
@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (copy, nonatomic) NSString *shopSchema;
@property (nonatomic) BOOL isSecretTokenSchemaFetched;
@property (copy, nonatomic) NSString *bcmInfo;
@property (copy, nonatomic) NSDictionary *msgContent;
@property (retain, nonatomic) NSNumber *msgType;
@property (nonatomic) BOOL useNewStyleSharePanel;
@property (copy, nonatomic) NSString *cartURL;
@property (copy, nonatomic) NSString *serviceURL;
@property (copy, nonatomic) NSString *ordersURL;
@property (nonatomic) BOOL showCouponEntrance;
@property (copy, nonatomic) NSDictionary *channelsInfo;
@property (nonatomic) BOOL useNewStyleQRCode;
@property (copy, nonatomic) AWEShopShareCardInfoModel *shopShareInfo;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL enableHook;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
