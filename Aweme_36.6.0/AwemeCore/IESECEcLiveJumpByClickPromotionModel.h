@class NSString, NSDictionary, NSNumber, IESECLiveImageURLModel;

@interface IESECEcLiveJumpByClickPromotionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *eventItemType;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *promotionId;
@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSDictionary *standardEventTrack;
@property (copy, nonatomic) NSDictionary *adEventParam;
@property (copy, nonatomic) NSString *channelId;
@property (retain, nonatomic) NSNumber *channelType;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) NSString *leafCategory;
@property (copy, nonatomic) NSDictionary *detailCover;
@property (copy, nonatomic) NSString *cover;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL singleSku;
@property (nonatomic) BOOL isCurrentLandscape;
@property (copy, nonatomic) NSString *checkCallback;
@property (copy, nonatomic) IESECLiveImageURLModel *detailCoverModel;
@property (copy, nonatomic) NSString *bizIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
