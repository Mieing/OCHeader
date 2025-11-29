@class NSString;

@interface RecommendEntranceStructV2 : GPBMessage

@property (copy, nonatomic) NSString *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (nonatomic) int recommendEntranceType;
@property (nonatomic) BOOL hasRecommendEntranceType;

+ (id)descriptor;

@end
