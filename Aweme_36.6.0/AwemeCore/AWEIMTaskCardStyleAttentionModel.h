@class NSString, NSArray, AWEIMTaskCardAttributeModel;

@interface AWEIMTaskCardStyleAttentionModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *sourceName;
@property (copy, nonatomic) NSString *sourceIcon;
@property (copy, nonatomic) NSString *missionTitle;
@property (copy, nonatomic) NSString *missionIcon;
@property (nonatomic) long long missionStatus;
@property (copy, nonatomic) NSString *missionType;
@property (retain, nonatomic) NSString *logExtra;
@property (nonatomic) long long missionSource;
@property (copy, nonatomic) NSString *missionId;
@property (copy, nonatomic) NSArray *missionTags;
@property (retain, nonatomic) AWEIMTaskCardAttributeModel *attentionAttributeInfo;
@property (copy, nonatomic) NSArray *attributeInfos;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *jumpSchema;
@property (nonatomic) BOOL unread;

+ (id)attentionAttributeInfoJSONTransformer;
+ (id)attributeInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
