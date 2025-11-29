@class NSString, ACCSocialStickeMentionBindingModel;

@interface ACCSocialStickerDraftModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *contentString;
@property (retain, nonatomic) ACCSocialStickeMentionBindingModel *mentionBindingModel;
@property (nonatomic) BOOL isAutoAdded;
@property (copy, nonatomic) NSString *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bindingModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
