@class NSString;

@interface AWEEcomSearchCardGenreType : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *carrierType;
@property (copy, nonatomic) NSString *mediaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
