@class NSString, NSNumber, IESECLiveSlicePriceLabelViewFontModel;

@interface IESECLiveSlicePriceLabelViewFontStyleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSNumber *minFontScale;
@property (retain, nonatomic) IESECLiveSlicePriceLabelViewFontModel *prefix;
@property (retain, nonatomic) IESECLiveSlicePriceLabelViewFontModel *dollarTag;
@property (retain, nonatomic) IESECLiveSlicePriceLabelViewFontModel *integer;
@property (retain, nonatomic) IESECLiveSlicePriceLabelViewFontModel *decimal;
@property (retain, nonatomic) IESECLiveSlicePriceLabelViewFontModel *suffix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
