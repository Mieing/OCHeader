@class NSString, NSArray, AWEIMTaskCardStyleActivityModel_CardSubTitleBody;

@interface AWEIMTaskCardStyleActivityModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *sourceName;
@property (copy, nonatomic) NSString *sourceIcon;
@property (copy, nonatomic) NSString *missionTitle;
@property (copy, nonatomic) NSString *missionIcon;
@property (nonatomic) long long missionStatus;
@property (copy, nonatomic) NSString *missionType;
@property (copy, nonatomic) NSArray *missionTags;
@property (copy, nonatomic) NSString *missionDesc;
@property (copy, nonatomic) NSString *contentImageURL;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSArray *itemActivityInfo;
@property (copy, nonatomic) NSArray *itemStatusInfo;
@property (retain, nonatomic) AWEIMTaskCardStyleActivityModel_CardSubTitleBody *subTitleInfo;
@property (copy, nonatomic) NSArray *button;
@property (nonatomic) long long missionSource;
@property (copy, nonatomic) NSString *missionId;
@property (retain, nonatomic) NSString *logExtra;
@property (nonatomic) BOOL unread;

+ (id)buttonJSONTransformer;
+ (id)subTitleInfoJSONTransformer;
+ (id)itemActivityInfoJSONTransformer;
+ (id)itemStatusInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
