@class NSNumber, NSString;

@interface IESECLiveSliceHotSaleViewStyleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *initialHeight;
@property (copy, nonatomic) NSNumber *initialWidth;
@property (copy, nonatomic) NSNumber *maxWidth;
@property (copy, nonatomic) NSNumber *tailMargin;
@property (copy, nonatomic) NSNumber *saleNumFontSize;
@property (copy, nonatomic) NSNumber *prefixFontSize;
@property (copy, nonatomic) NSNumber *suffixFontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
