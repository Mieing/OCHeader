@class NSMutableDictionary, NSDictionary, NSString, IESGCPTrackTrafficExtraModel, IESGCPTrackUserInfoModel;

@interface IESGCPTrackContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *propertyStore;
@property (readonly, nonatomic) NSDictionary *JSONDictionary;
@property (copy, nonatomic) NSString *trafficSource;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) IESGCPTrackTrafficExtraModel *trafficExtra;
@property (copy, nonatomic) NSDictionary *logPb;
@property (copy, nonatomic) NSString *bizType;
@property (copy, nonatomic) NSString *bizId;
@property (copy, nonatomic) NSString *bizMode;
@property (copy, nonatomic) NSDictionary *bizExtra;
@property (copy, nonatomic) NSDictionary *adParams;
@property (copy, nonatomic) NSString *promoteScene;
@property (copy, nonatomic) NSDictionary *promoteSceneSub;
@property (copy, nonatomic) NSString *promoteInstanceId;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSDictionary *gameInfo;
@property (copy, nonatomic) NSString *creatorId;
@property (copy, nonatomic) NSString *contentId;
@property (copy, nonatomic) NSString *userType;
@property (copy, nonatomic) IESGCPTrackUserInfoModel *userInfo;

+ (id)propertyCustomClassMap;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
