@class NSString;

@interface IESLLPOIAnchorReviewStatusModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
