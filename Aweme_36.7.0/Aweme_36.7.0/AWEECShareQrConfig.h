@class NSString;

@interface AWEECShareQrConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL withBackground;
@property (copy, nonatomic) NSString *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
