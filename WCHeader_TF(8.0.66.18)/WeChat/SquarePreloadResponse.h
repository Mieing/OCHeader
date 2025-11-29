@class SquarePreloadInfo, MMListenFeedMixedListResponse, NSString;

@interface SquarePreloadResponse : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) MMListenFeedMixedListResponse *mixedListResponse;
@property (retain, nonatomic) SquarePreloadInfo *prealodInfo;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) long long timestampSecond;

+ (void)initialize;

@end
