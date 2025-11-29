@class NSString, NSNumber;

@interface IESECLiveCheckSKUParam : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL forceYataSku;
@property (copy, nonatomic) NSString *bizIdentifier;
@property (copy, nonatomic) NSNumber *buttonType;
@property (nonatomic) long long heightPercent;
@property (nonatomic) double maskAlpha;
@property (retain, nonatomic) NSNumber *warehouseListID;
@property (retain, nonatomic) NSNumber *liveShopMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
