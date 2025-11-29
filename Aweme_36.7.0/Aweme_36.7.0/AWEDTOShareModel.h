@class NSString;

@interface AWEDTOShareModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *openPlatformKey;
@property (copy, nonatomic) NSString *openPlatformShareId;
@property (copy, nonatomic) NSString *openPlatformExtra;
@property (copy, nonatomic) NSString *openPlatformContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
