@class NSString;

@interface AWEAdFeaturedLabelModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *colorForWhite;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *textColorForWhite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
