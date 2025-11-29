@class NSString;

@interface IESEffectRankingInfo : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *categoryKey;
@property (readonly, copy, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) unsigned long long ranking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
