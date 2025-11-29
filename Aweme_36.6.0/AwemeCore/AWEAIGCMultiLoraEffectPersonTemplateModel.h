@class NSString, NSArray;

@interface AWEAIGCMultiLoraEffectPersonTemplateModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long personNumber;
@property (copy, nonatomic) NSString *previewImage;
@property (copy, nonatomic) NSArray *previewImages;
@property (nonatomic) BOOL isAsync;
@property (nonatomic) long long generateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
