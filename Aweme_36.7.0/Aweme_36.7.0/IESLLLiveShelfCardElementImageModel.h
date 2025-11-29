@class IESLLLiveShelfElementTextModel, IESLLLiveShelfElementMediaModel, NSString, NSNumber;

@interface IESLLLiveShelfCardElementImageModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLLiveShelfElementTextModel *indexText;
@property (retain, nonatomic) IESLLLiveShelfElementMediaModel *headImage;
@property (retain, nonatomic) IESLLLiveShelfElementMediaModel *tagImage;
@property (retain, nonatomic) IESLLLiveShelfElementMediaModel *borderImage;
@property (retain, nonatomic) IESLLLiveShelfElementTextModel *maskText;
@property (nonatomic) BOOL isGray;
@property (copy, nonatomic) NSNumber *headMargin;
@property (nonatomic) long long tagImageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
