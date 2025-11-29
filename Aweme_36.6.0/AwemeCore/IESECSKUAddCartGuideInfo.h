@class NSNumber, NSString, NSDictionary;

@interface IESECSKUAddCartGuideInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *countQuota;
@property (copy, nonatomic) NSString *guideText;
@property (retain, nonatomic) NSNumber *guideType;
@property (copy, nonatomic) NSDictionary *trackMeta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
