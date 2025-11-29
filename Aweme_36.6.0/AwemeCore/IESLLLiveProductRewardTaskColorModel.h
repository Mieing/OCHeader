@class NSString;

@interface IESLLLiveProductRewardTaskColorModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *startColor;
@property (copy, nonatomic) NSString *centerColor;
@property (copy, nonatomic) NSString *endColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
