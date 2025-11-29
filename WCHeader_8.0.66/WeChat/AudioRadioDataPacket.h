@class NSMutableArray, MMListenFeedMixedListResponse;

@interface AudioRadioDataPacket : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *mixFeedItems;
@property (retain, nonatomic) MMListenFeedMixedListResponse *lastResponse;

+ (void)initialize;

@end
