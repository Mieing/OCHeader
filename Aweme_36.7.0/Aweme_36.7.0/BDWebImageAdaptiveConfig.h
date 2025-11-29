@class NSArray, NSString;

@interface BDWebImageAdaptiveConfig : NSObject <BDModelCustom>

@property (copy, nonatomic) NSArray *staticAdaptivePolicies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
