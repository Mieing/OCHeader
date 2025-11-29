@class IESLLPOICommonEntryModel, NSString, IESLLPOILynxModel;

@interface IESLLPOITextTagRateInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLPOILynxModel *lynxData;
@property (retain, nonatomic) IESLLPOICommonEntryModel *entry;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
