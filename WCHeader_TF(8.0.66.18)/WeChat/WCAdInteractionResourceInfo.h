@class NSString, NSArray, WCAdInteractionResourceLayoutInfo;

@interface WCAdInteractionResourceInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *resourceId;
@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSArray *contentResources;
@property (nonatomic) BOOL showGradientView;
@property (nonatomic) unsigned long long gradientViewType;
@property (retain, nonatomic) NSString *relatedId;
@property (nonatomic) BOOL startAnimationManually;
@property (nonatomic) double alpha;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) double backgroundColorAlpha;
@property (readonly, retain, nonatomic) WCAdInteractionResourceLayoutInfo *layoutInfo;
@property (retain, nonatomic) WCAdInteractionResourceLayoutInfo *portraitLayoutInfo;
@property (retain, nonatomic) WCAdInteractionResourceLayoutInfo *landscapeLayoutInfo;
@property (nonatomic) unsigned long long imageType;
@property (retain, nonatomic) NSString *resourceUrl;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) NSString *imageColor;
@property (nonatomic) double imageColorAlpha;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) double fontSize;
@property (nonatomic) unsigned long long fontWeightType;
@property (retain, nonatomic) NSString *textColor;
@property (nonatomic) double textColorAlpha;
@property (nonatomic) unsigned long long lineCount;
@property (nonatomic) BOOL showShadow;
@property (nonatomic) unsigned long long alignmentType;
@property (retain, nonatomic) NSString *btnBackgroundColor;
@property (nonatomic) double btnBackgroundColorAlpha;
@property (retain, nonatomic) NSString *btnIconUrl;
@property (nonatomic) unsigned long long btnIconSize;
@property (nonatomic) double btnIconSpacing;
@property (nonatomic) BOOL usingPerformanceMode;
@property (nonatomic) BOOL needAccelerationData;
@property (nonatomic) double startAngle;
@property (nonatomic) double endAngle;
@property (nonatomic) BOOL clockwise;
@property (nonatomic) BOOL needExposedInfo;
@property (retain, nonatomic) Class reportDataHendlerClass;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
