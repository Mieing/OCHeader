@class NSString, MMListenAudioBaseResponse, NSData, NSMutableArray, BaseResponse;

@interface MMListenFeedMixedListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL needRefresh;
@property (retain, nonatomic) NSString *hasMoreDesc;
@property (retain, nonatomic) MMListenAudioBaseResponse *audioBaseResponse;

+ (void)initialize;

@end
