@class NSString, NSDictionary, IESECSKUAddCartCustomToastInfo;

@interface IESECAddToCartParams : NSObject

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *comboID;
@property (copy, nonatomic) NSString *comboNum;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL needSaaSHeaders;
@property (nonatomic) BOOL cancelToast;
@property (copy, nonatomic) NSString *channelId;
@property (nonatomic) long long channelType;
@property (retain, nonatomic) NSString *bizCampaignType;
@property (copy, nonatomic) NSString *cpsTrack;
@property (copy, nonatomic) NSString *customPropertyList;
@property (copy, nonatomic) NSString *salePackageList;
@property (retain, nonatomic) NSDictionary *requestInfo;
@property (retain, nonatomic) IESECSKUAddCartCustomToastInfo *customToastInfo;

- (void).cxx_destruct;

@end
