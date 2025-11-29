@class NSString, MMLiveBeautyBadgeItem;

@interface MMLiveBeautyItem : NSObject

@property (retain, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *colorHexString;
@property (nonatomic) BOOL applyBlurring;
@property (retain, nonatomic) MMLiveBeautyBadgeItem *badge;
@property (retain, nonatomic) NSString *driverName;
@property (nonatomic) double minimumValue;
@property (nonatomic) double maximumValue;
@property (nonatomic) double defaultValue;
@property (nonatomic) BOOL reverseValueDisplay;
@property (nonatomic) BOOL applyAbsoluteValue;
@property (nonatomic) BOOL useOpaqueResources;
@property (retain, nonatomic) NSString *positiveResourcesPath;
@property (retain, nonatomic) NSString *negativeResourcesPath;
@property (retain, nonatomic) NSString *iconPath;
@property (retain, nonatomic) NSString *itemGroupId;
@property (nonatomic) unsigned long long order;
@property (nonatomic) double value;

+ (id)itemInJsonDictionary:(id)a0 suiteId:(id)a1 suiteResourcePath:(id)a2 itemGroups:(id)a3 badges:(id)a4 isLowSpecDevice:(BOOL)a5;

- (double)equivalentModernValueForLegacyValue:(double)a0;
- (void).cxx_destruct;

@end
