@class NSDictionary, NSString;

@interface APCDTOIMInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *sendMessageExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
