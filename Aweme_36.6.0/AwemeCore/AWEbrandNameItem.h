@class NSString;

@interface AWEbrandNameItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *brandName;
@property (nonatomic) long long configStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
