@class NSString, NSArray;

@interface AWEIMTaskCardStyleListModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *sourceName;
@property (copy, nonatomic) NSString *sourceIcon;
@property (copy, nonatomic) NSString *missionTitle;
@property (copy, nonatomic) NSString *titleIcon;
@property (nonatomic) long long missionStatus;
@property (copy, nonatomic) NSString *missionType;
@property (retain, nonatomic) NSString *logExtra;
@property (nonatomic) long long missionSource;
@property (copy, nonatomic) NSString *missionId;
@property (copy, nonatomic) NSArray *missionTags;
@property (copy, nonatomic) NSArray *goodsCards;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *ext;
@property (nonatomic) BOOL unread;

+ (id)goodsCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
