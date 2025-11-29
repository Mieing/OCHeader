@class NSString, BannerCardCover;

@interface MediumVideoBannerStruct : GPBMessage

@property (copy, nonatomic) NSString *confId;
@property (nonatomic) BOOL hasConfId;
@property (copy, nonatomic) NSString *spotKey;
@property (nonatomic) BOOL hasSpotKey;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) long long startTime;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) long long endTime;
@property (nonatomic) BOOL hasEndTime;
@property (copy, nonatomic) NSString *stuffDetail;
@property (nonatomic) BOOL hasStuffDetail;
@property (copy, nonatomic) NSString *confSource;
@property (nonatomic) BOOL hasConfSource;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) BOOL hasToken;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasDesc;
@property (copy, nonatomic) NSString *landingSchema;
@property (nonatomic) BOOL hasLandingSchema;
@property (nonatomic) int showActivityTags;
@property (nonatomic) BOOL hasShowActivityTags;
@property (nonatomic) int showStrategy;
@property (nonatomic) BOOL hasShowStrategy;
@property (retain, nonatomic) BannerCardCover *cover;
@property (nonatomic) BOOL hasCover;
@property (retain, nonatomic) BannerCardCover *horizontalCover;
@property (nonatomic) BOOL hasHorizontalCover;
@property (retain, nonatomic) BannerCardCover *verticalCover;
@property (nonatomic) BOOL hasVerticalCover;
@property (nonatomic) long long relativeOrder;
@property (nonatomic) BOOL hasRelativeOrder;

+ (id)descriptor;

@end
