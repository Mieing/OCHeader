@class NSString, UrlStructV2;

@interface HotTrendsLabelStructV2 : GPBMessage

@property (nonatomic) long long hotspotId;
@property (nonatomic) BOOL hasHotspotId;
@property (copy, nonatomic) NSString *bgLeftTopColor;
@property (nonatomic) BOOL hasBgLeftTopColor;
@property (copy, nonatomic) NSString *bgRightBottomColor;
@property (nonatomic) BOOL hasBgRightBottomColor;
@property (retain, nonatomic) UrlStructV2 *leftIcon;
@property (nonatomic) BOOL hasLeftIcon;
@property (retain, nonatomic) UrlStructV2 *rightIcon;
@property (nonatomic) BOOL hasRightIcon;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) BOOL hasLabelText;
@property (copy, nonatomic) NSString *jumpSchema;
@property (nonatomic) BOOL hasJumpSchema;

+ (id)descriptor;

@end
