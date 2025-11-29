@class NSString, NSMutableDictionary;

@interface HTSLivePublisherInfo : GPBMessage

@property (copy, nonatomic) NSString *publisherId;
@property (nonatomic) long long userId;
@property (nonatomic) int distributionScene;
@property (nonatomic) long long feedTimeMs;
@property (nonatomic) long long clientVisibleRoomId;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (readonly, nonatomic) unsigned long long extraInfo_Count;

+ (id)descriptor;

- (void)setClientVisibleRoomId:(long long)a0;
- (void)setFeedTimeMs:(long long)a0;
- (void)setDistributionScene:(int)a0;
- (void)setUserId:(long long)a0;
- (void)setPublisherId:(id)a0;

@end
