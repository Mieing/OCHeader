@class NSString;

@interface ACCFlowerRedPacketInfo : MTLModel

@property (readonly, copy, nonatomic) NSString *uniqueCreationID;
@property (copy, nonatomic) NSString *couponId;
@property (nonatomic) long long couponCount;
@property (copy, nonatomic) NSString *couponOrderId;
@property (copy, nonatomic) NSString *cashRedPacketId;
@property (copy, nonatomic) NSString *cashPacketExtra;
@property (copy, nonatomic) NSString *cashOutOrderId;

- (id)outOrderId;
- (unsigned long long)currentAssetType;
- (void)rebuildCreationID;
- (id)initWithCreationID:(id)a0;
- (void).cxx_destruct;

@end
