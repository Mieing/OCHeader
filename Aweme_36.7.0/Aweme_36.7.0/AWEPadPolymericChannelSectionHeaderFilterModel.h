@class NSString, NSArray;

@interface AWEPadPolymericChannelSectionHeaderFilterModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *filterKey;
@property (retain, nonatomic) NSArray *filterValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
