@interface BDUGLuckyUser : BDUGLuckyJSONModel

@property (nonatomic) long long userID;
@property (nonatomic) long long deviceID;
@property (nonatomic) long long actID;
@property (nonatomic) long long activityID;
@property (nonatomic) long long appID;

+ (id)modelCustomPropertyMapper;

@end
