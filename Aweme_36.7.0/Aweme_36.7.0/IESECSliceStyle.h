@class NSString;

@interface IESECSliceStyle : MTLModel <MTLJSONSerializing>

@property (nonatomic) struct IESECSliceXFlexValue { float value; unsigned long long unit; } width;
@property (nonatomic) struct IESECSliceXFlexValue { float value; unsigned long long unit; } height;
@property (nonatomic) struct IESECSliceXFlexValue { float value; unsigned long long unit; } maxWidth;
@property (nonatomic) struct IESECSliceXFlexValue { float value; unsigned long long unit; } minWidth;
@property (nonatomic) struct IESECSliceXFlexValue { float value; unsigned long long unit; } maxHeight;
@property (nonatomic) struct IESECSliceXFlexValue { float value; unsigned long long unit; } minHeight;
@property (nonatomic) double aspectRatio;
@property (nonatomic) struct IESECSliceXFlexEdgeInset { struct IESECSliceXFlexValue { float value; unsigned long long unit; } top; struct IESECSliceXFlexValue { float value; unsigned long long unit; } bottom; struct IESECSliceXFlexValue { float value; unsigned long long unit; } left; struct IESECSliceXFlexValue { float value; unsigned long long unit; } right; } padding;
@property (nonatomic) struct IESECSliceXFlexEdgeInset { struct IESECSliceXFlexValue { float value; unsigned long long unit; } top; struct IESECSliceXFlexValue { float value; unsigned long long unit; } bottom; struct IESECSliceXFlexValue { float value; unsigned long long unit; } left; struct IESECSliceXFlexValue { float value; unsigned long long unit; } right; } margin;
@property (nonatomic) unsigned long long position;
@property (nonatomic) struct IESECSliceXFlexValue { float value; unsigned long long unit; } left;
@property (nonatomic) struct IESECSliceXFlexValue { float value; unsigned long long unit; } right;
@property (nonatomic) struct IESECSliceXFlexValue { float value; unsigned long long unit; } top;
@property (nonatomic) struct IESECSliceXFlexValue { float value; unsigned long long unit; } bottom;
@property (nonatomic) struct IESECSliceXFlexValue { float value; unsigned long long unit; } flexBasis;
@property (nonatomic) double flexGrow;
@property (nonatomic) double flexShrink;
@property (nonatomic) unsigned long long alignSelf;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL isExcludedLayout;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *bgImage;
@property (nonatomic) struct IESECSliceXRadius { double topLeft; double topRight; double bottomLeft; double bottomRight; } radius;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) unsigned long long borderStyle;
@property (nonatomic) unsigned long long flexDirection;
@property (nonatomic) unsigned long long justifyContent;
@property (nonatomic) unsigned long long alignItems;
@property (nonatomic) unsigned long long alignContent;
@property (nonatomic) unsigned long long flexWrap;
@property (copy, nonatomic) NSString *fontColor;
@property (nonatomic) double fontSize;
@property (nonatomic) long long fontWeight;
@property (nonatomic) double maxLine;
@property (nonatomic) BOOL isEndEllipse;
@property (nonatomic) unsigned long long scaleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)positionJSONTransformer;
+ (id)bottomJSONTransformer;
+ (id)paddingJSONTransformer;
+ (id)widthJSONTransformer;
+ (id)heightJSONTransformer;
+ (id)marginJSONTransformer;
+ (id)leftJSONTransformer;
+ (id)maxWidthJSONTransformer;
+ (id)minWidthJSONTransformer;
+ (id)maxHeightJSONTransformer;
+ (id)minHeightJSONTransformer;
+ (id)topJSONTransformer;
+ (id)flexBasisJSONTransformer;
+ (id)alignSelfJSONTransformer;
+ (id)isHiddenJSONTransformer;
+ (id)isExcludedLayoutJSONTransformer;
+ (id)radiusJSONTransformer;
+ (id)borderStyleJSONTransformer;
+ (id)flexDirectionJSONTransformer;
+ (id)justifyContentJSONTransformer;
+ (id)alignItemsJSONTransformer;
+ (id)alignContentJSONTransformer;
+ (id)flexWrapJSONTransformer;
+ (id)scaleTypeJSONTransformer;
+ (id)defaultStyle;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)rightJSONTransformer;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
