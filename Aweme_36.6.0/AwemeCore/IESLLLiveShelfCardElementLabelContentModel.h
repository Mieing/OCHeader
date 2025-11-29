@class IESLLLiveShelfElementTextModel, IESLLLiveShelfElementMediaModel, NSString;

@interface IESLLLiveShelfCardElementLabelContentModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLLiveShelfElementTextModel *text;
@property (retain, nonatomic) IESLLLiveShelfElementMediaModel *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
