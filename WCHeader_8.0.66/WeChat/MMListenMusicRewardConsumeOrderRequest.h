@class BaseRequest, NSString, MMListenMusicBaseRequest, NSMutableArray;

@interface MMListenMusicRewardConsumeOrderRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (retain, nonatomic) NSString *listenId;

+ (void)initialize;

@end
