@class NSString;

@interface AWEInTodaySchemaMemoriesInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
