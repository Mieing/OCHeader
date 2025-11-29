@class NSString;

@interface IESLLPOIServiceSpuEntryModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long schemaType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schemaUrl;
@property (nonatomic) unsigned long long entryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
