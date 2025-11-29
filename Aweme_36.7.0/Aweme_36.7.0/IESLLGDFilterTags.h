@class NSString;

@interface IESLLGDFilterTags : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *display_text;
@property (nonatomic) long long filter_by;
@property (nonatomic) long long option_type;
@property (nonatomic) long long sort_by;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
