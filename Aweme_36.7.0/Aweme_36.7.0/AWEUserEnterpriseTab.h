@class NSString;

@interface AWEUserEnterpriseTab : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *tabSchema;
@property (nonatomic) long long show_tab_style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
