@class NSString;

@interface AWELiteUGECAnchorPrice : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long price;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
