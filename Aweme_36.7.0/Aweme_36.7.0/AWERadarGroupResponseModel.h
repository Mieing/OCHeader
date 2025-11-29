@class NSNumber, NSString, NSArray;

@interface AWERadarGroupResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *interval;
@property (nonatomic) long long bizCode;
@property (nonatomic) long long actionType;
@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSString *bizToast;
@property (retain, nonatomic) NSArray *noticeList;
@property (retain, nonatomic) NSArray *nearbyGroupUserList;
@property (nonatomic) unsigned long long strategy;

+ (id)nearbyGroupUserListJSONTransformer;
+ (id)noticeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
