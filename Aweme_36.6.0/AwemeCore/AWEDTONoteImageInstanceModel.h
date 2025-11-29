@class NSString, NSArray;

@interface AWEDTONoteImageInstanceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *templateJson;
@property (copy, nonatomic) NSString *templateCategoryId;
@property (copy, nonatomic) NSString *templateCategoryName;
@property (nonatomic) BOOL isFromMultiSlotTemplate;
@property (copy, nonatomic) NSArray *multiSlotImageInfo;
@property (copy, nonatomic) NSArray *imageTemplateAigcResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)multiSlotImageInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
