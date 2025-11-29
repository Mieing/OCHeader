@class NSNumber, NSArray, NSString;

@interface AWECollectTrendsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *collectMusicId;
@property (copy, nonatomic) NSArray *collectEffectId;
@property (copy, nonatomic) NSArray *collectTemplateId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
