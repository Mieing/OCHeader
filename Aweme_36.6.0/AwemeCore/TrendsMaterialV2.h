@class NSString, UrlStructV2, NSMutableArray;

@interface TrendsMaterialV2 : GPBMessage

@property (nonatomic) int materialType;
@property (nonatomic) BOOL hasMaterialType;
@property (copy, nonatomic) NSString *id_p;
@property (nonatomic) BOOL hasId_p;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (nonatomic) long long duetFromId;
@property (nonatomic) BOOL hasDuetFromId;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL hasButtonText;
@property (copy, nonatomic) NSString *buttonSchema;
@property (nonatomic) BOOL hasButtonSchema;
@property (retain, nonatomic) UrlStructV2 *cover;
@property (nonatomic) BOOL hasCover;
@property (nonatomic) long long useCount;
@property (nonatomic) BOOL hasUseCount;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) BOOL hasNickName;
@property (nonatomic) int mvType;
@property (nonatomic) BOOL hasMvType;
@property (nonatomic) int awemeType;
@property (nonatomic) BOOL hasAwemeType;
@property (nonatomic) int materialSource;
@property (nonatomic) BOOL hasMaterialSource;
@property (nonatomic) int templateType;
@property (nonatomic) BOOL hasTemplateType;
@property (nonatomic) int templateProvider;
@property (nonatomic) BOOL hasTemplateProvider;
@property (retain, nonatomic) NSMutableArray *templateFeatureArray;
@property (readonly, nonatomic) unsigned long long templateFeatureArray_Count;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL hasSubTitle;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL hasIsCollected;
@property (nonatomic) int templateSlots;
@property (nonatomic) BOOL hasTemplateSlots;
@property (retain, nonatomic) UrlStructV2 *duetAuthorAvatar;
@property (nonatomic) BOOL hasDuetAuthorAvatar;

+ (id)descriptor;

@end
