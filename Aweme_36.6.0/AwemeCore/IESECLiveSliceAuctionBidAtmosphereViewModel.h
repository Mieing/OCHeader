@class NSString, NSNumber;

@interface IESECLiveSliceAuctionBidAtmosphereViewModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSNumber *price;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
