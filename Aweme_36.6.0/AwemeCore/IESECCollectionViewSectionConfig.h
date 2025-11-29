@class UIColor, NSString;

@interface IESECCollectionViewSectionConfig : NSObject

@property (nonatomic) double marginTop;
@property (nonatomic) double marginBottom;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginRight;
@property (nonatomic) double paddingTop;
@property (nonatomic) double paddingBottom;
@property (nonatomic) double paddingLeft;
@property (nonatomic) double paddingRight;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *backgroundImage;
@property (copy, nonatomic) NSString *borderRadius;
@property (nonatomic) long long contentMode;
@property (nonatomic) double aspectRatio;
@property (nonatomic) long long columnCount;
@property (nonatomic) long long rowCount;
@property (nonatomic) double verticalGap;
@property (nonatomic) double horizontalGap;
@property (nonatomic) BOOL hasSupplementHeader;
@property (nonatomic) double supplementHeaderHeight;
@property (nonatomic) BOOL cacheEnable;
@property (nonatomic) BOOL invalidFlag;

- (void).cxx_destruct;

@end
