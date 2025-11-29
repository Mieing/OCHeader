@class NSString;

@interface IESLLGDRateDiggHint : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL show_digg_hint;
@property (copy, nonatomic) NSString *hint_text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
