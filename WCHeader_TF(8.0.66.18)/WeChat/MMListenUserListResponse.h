@class MMListenAudioBaseResponse, MMListenMusicBaseResponse, NSData, NSMutableArray, BaseResponse;

@interface MMListenUserListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MMListenMusicBaseResponse *musicBaseResponse;
@property (retain, nonatomic) MMListenAudioBaseResponse *audioBaseResponse;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) unsigned int totalUserCount;
@property (nonatomic) BOOL hasMore;

+ (void)initialize;

@end
