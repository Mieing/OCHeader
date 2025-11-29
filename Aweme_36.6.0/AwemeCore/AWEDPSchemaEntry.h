@class NSDictionary, AWEDPSchemaEntryFilter, NSString;

@interface AWEDPSchemaEntry : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEDPSchemaEntryFilter *filter;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
