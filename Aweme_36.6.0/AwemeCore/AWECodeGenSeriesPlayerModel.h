@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenSeriesPlayerModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long userId;
@property (retain, nonatomic) AWECodeGenUrlModel *avatarModel;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *jumpSchema;
@property (nonatomic) long long actorId;
@property (copy, nonatomic) NSString *actorIdStr;
@property (copy, nonatomic) NSString *openUserId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
