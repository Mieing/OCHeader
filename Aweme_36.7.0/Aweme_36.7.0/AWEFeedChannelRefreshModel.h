@class NSString;

@interface AWEFeedChannelRefreshModel : AWEFeedChannelTrackBaseModel

@property (nonatomic) BOOL isCallByFrame;
@property (nonatomic) long long refreshType;
@property (copy, nonatomic) NSString *refreshMethod;
@property (nonatomic) BOOL topTabRefreshAnimation;
@property (nonatomic) BOOL bottomTabRefreshAnimation;
@property (copy, nonatomic) NSString *refreshChannel;

- (void).cxx_destruct;
- (id)description;

@end
