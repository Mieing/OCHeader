@class AWEIMTaskCardStyleActivityModel, AWEIMTaskCardStyleListModel, NSString, AWEIMTaskCardStyleAttentionModel, AWEIMTaskCardStyleDefaultModel;

@interface AWEIMTaskCardDetailModel : AWEBaseApiModel

@property (nonatomic) long long showType;
@property (nonatomic) BOOL unread;
@property (retain, nonatomic) AWEIMTaskCardStyleAttentionModel *missionCardStyleAttentionInfo;
@property (retain, nonatomic) AWEIMTaskCardStyleListModel *missionCardStyleListInfo;
@property (retain, nonatomic) AWEIMTaskCardStyleDefaultModel *missionCardStyleNormalInfo;
@property (retain, nonatomic) AWEIMTaskCardStyleActivityModel *missionCardStyleActivityInfo;
@property (nonatomic) long long missionSource;
@property (retain, nonatomic) NSString *missionId;
@property (retain, nonatomic) NSString *logExtra;

+ (id)missionCardStyleAttentionInfoJSONTransformer;
+ (id)missionCardStyleListInfoJSONTransformer;
+ (id)missionCardStyleNormalInfoJSONTransformer;
+ (id)missionCardStyleActivityInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
