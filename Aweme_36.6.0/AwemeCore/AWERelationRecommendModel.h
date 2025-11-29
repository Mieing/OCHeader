@class NSNumber, NSString;

@interface AWERelationRecommendModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *recommendType;
@property (copy, nonatomic) NSString *relationTextKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)addTrackInfo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
