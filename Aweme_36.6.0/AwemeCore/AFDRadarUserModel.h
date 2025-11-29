@class NSString, AWEUserModel, AFDRadarShareAwemeModel;

@interface AFDRadarUserModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) unsigned long long userType;
@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic) NSString *historyUserDesc;
@property (retain, nonatomic) AFDRadarShareAwemeModel *shareModel;
@property (nonatomic) BOOL canShare;

+ (id)userJSONTransformer;
+ (id)shareModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
