@class NSString;

@interface AWEPadPolymericChannelCardSizeFormulaModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long cardType;
@property (nonatomic) long long evaluationType;
@property (nonatomic) long long cardNumPortrait;
@property (nonatomic) long long cardNumLandscape;
@property (nonatomic) long long edgePadding;
@property (nonatomic) long long cardPadding;
@property (nonatomic) double cardWidthPercent;
@property (nonatomic) double cardHeightPercent;
@property (nonatomic) double cardExtraHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
