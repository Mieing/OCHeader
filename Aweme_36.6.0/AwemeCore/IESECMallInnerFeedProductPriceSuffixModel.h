@class NSNumber, NSString;

@interface IESECMallInnerFeedProductPriceSuffixModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *suffixType;
@property (copy, nonatomic) NSString *suffixDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
