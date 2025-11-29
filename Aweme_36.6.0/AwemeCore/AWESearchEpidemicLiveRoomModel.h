@class NSString;

@interface AWESearchEpidemicLiveRoomModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *roomInfo;
@property (copy, nonatomic) NSString *liveURL;
@property (copy, nonatomic) NSString *liveStatusURL;
@property (nonatomic) long long liveType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
