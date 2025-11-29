@class IESLLLiveShelfElementTextModel, NSString;

@interface IESLLLiveShelfCardElementActionAreaModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long actionType;
@property (retain, nonatomic) IESLLLiveShelfElementTextModel *buttonText;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL clickable;
@property (copy, nonatomic) NSString *opacity;
@property (copy, nonatomic) NSString *clickToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
