@class NSString;

@interface AWEProfileAggregationTabModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL showTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
