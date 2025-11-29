@class NSString;

@interface ACCFlowerRedPacketDataServiceAssetModel : NSObject

@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) long long assetCount;
@property (copy, nonatomic) NSString *outOrderId;
@property (nonatomic) BOOL isCounponAsset;
@property (nonatomic) BOOL counponHasUse;
@property (nonatomic) unsigned long long sendRedPacketType;

+ (id)counponAssetWithCounponId:(id)a0 outOrderId:(id)a1 assetCount:(long long)a2;
+ (id)redPacketAssetWithRedPacketId:(id)a0 outOrderId:(id)a1;

- (void).cxx_destruct;

@end
