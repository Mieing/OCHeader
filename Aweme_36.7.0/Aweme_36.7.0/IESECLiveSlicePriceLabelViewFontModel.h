@class NSString, NSNumber;

@interface IESECLiveSlicePriceLabelViewFontModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *fontFamily;
@property (copy, nonatomic) NSNumber *fontSize;
@property (copy, nonatomic) NSNumber *fontWeight;
@property (copy, nonatomic) NSNumber *baselineOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
