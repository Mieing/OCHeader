@class NSString;

@interface IESECWinLynxSSR : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *ssrData;
@property (copy, nonatomic) NSString *hydrateUrl;
@property (copy, nonatomic) NSString *hydrateData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
