@class NSString;

@interface AWESearchCreateTimeConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long position;
@property (copy, nonatomic) NSString *fontColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
