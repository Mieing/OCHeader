@class NSString;

@interface AWEHPTopTabItemViewUIConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double padding;
@property (nonatomic) double iconLeftMargin;
@property (nonatomic) double firstIconRightMargin;
@property (nonatomic) double normalIconRightMargin;
@property (nonatomic) double iconWidth;
@property (nonatomic) double avatarSize;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontStrokeWidth;
@property (nonatomic) long long unselectedFontWeight;
@property (nonatomic) long long selectedFontWeight;
@property (nonatomic) double bottomLineWidth;
@property (nonatomic) double bottomLineHeight;
@property (nonatomic) double bottomLineCornerRadius;
@property (retain, nonatomic) NSString *bottomLineLightColor;
@property (retain, nonatomic) NSString *bottomLineDarkColor;
@property (nonatomic) double bottomLineOffset;
@property (nonatomic) double alienLineRatio;
@property (nonatomic) double alienLineWidth;
@property (nonatomic) double alienLineHeight;
@property (nonatomic) double alienLineOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
