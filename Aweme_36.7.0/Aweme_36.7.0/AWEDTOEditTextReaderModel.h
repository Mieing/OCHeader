@class NSArray, NSString;

@interface AWEDTOEditTextReaderModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *textModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
