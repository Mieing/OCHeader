@class NSArray, NSString;

@interface AWEInnerPushExemptInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *exemptPages;
@property (copy, nonatomic) NSArray *canShowPages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
