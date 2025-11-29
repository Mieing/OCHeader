@class NSString;

@interface AWESearchEpidemicLiveRoomModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *roomInfo;
@property (nonatomic) long long liveType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
