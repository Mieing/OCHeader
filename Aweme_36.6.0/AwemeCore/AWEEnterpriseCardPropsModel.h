@class NSString;

@interface AWEEnterpriseCardPropsModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long timeout;
@property (copy, nonatomic) NSString *timeoutToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
