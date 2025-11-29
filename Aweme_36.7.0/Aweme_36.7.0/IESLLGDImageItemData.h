@class IESLLGDRateModel, NSString, IESLLGDVideoModel, IESLLGDImageModel;

@interface IESLLGDImageItemData : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLGDImageModel *image;
@property (retain, nonatomic) IESLLGDVideoModel *video;
@property (retain, nonatomic) IESLLGDRateModel *rate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
