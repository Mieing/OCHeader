@class NSNumber, AWEProfileUrgeControlModel;

@interface AWEUserFansPushModel : AWEBaseApiModel

@property (nonatomic) long long blockUrgeSetting;
@property (nonatomic) long long urgeUnreadCount;
@property (nonatomic) long long userUrged;
@property (retain, nonatomic) NSNumber *latestAwemeTime;
@property (retain, nonatomic) NSNumber *latestLiveTime;
@property (retain, nonatomic) AWEProfileUrgeControlModel *urgeControlMap;

+ (id)urgeControlMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
