@class NSString;

@interface IESLLPOITagRateTagModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long tagID;
@property (copy, nonatomic) NSString *tagText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
