@class NSString;

@interface AWEPOINearbyRankEntryModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *rankTitle;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)extraRankParams;
- (void).cxx_destruct;

@end
