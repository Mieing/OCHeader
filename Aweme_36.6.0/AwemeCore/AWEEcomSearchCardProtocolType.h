@class NSString, AWEEcomSearchCardGenreType;

@interface AWEEcomSearchCardProtocolType : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *kindType;
@property (copy, nonatomic) NSString *cardType;
@property (retain, nonatomic) AWEEcomSearchCardGenreType *genreType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genreTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
