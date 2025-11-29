@class NSString;

@interface AWEProfileBrandTabModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL show;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long industryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
