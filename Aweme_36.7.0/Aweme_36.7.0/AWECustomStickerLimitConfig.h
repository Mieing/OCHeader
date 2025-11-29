@class NSDictionary, NSString;

@interface AWECustomStickerLimitConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double gifSizeLimit;
@property (nonatomic) double gifMaxLimit;
@property (nonatomic) double uploadWidthLimit;
@property (nonatomic) double uploadHeightLimit;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
